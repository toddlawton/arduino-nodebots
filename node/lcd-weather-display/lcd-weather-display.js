/**
 * Node LCD Weather Display
 * @toddlawton
 *
 * Fetch the latest weather data and present it on an LCD screen.
 */

var five = require("johnny-five"),
    request = require("request"),
    board = new five.Board(),
    numberRows = 2,
    numberCols = 16,
    currentCity = "Montreal",
    countryCode = "CA",
    temperatureFormat = "C"; // "C" for Celsius, "F" for Fahrenheit


function kelvinToCelsius(input) {
	input -= 273.15;
	return parseInt(input);
}

function kelvinToFahrenheit(input) {
	input = (input - 273.15) * 1.8000 + 32.00;
	return parseInt(input);
}

board.on("ready", function() {
	var lcd = new five.LCD({
		// LCD pin name  RS  EN  DB4 DB5 DB6 DB7
		// Arduino pin # 12  11   5   4  3  2
		pins: [ 12, 11, 5, 4, 3, 2 ],
		rows: 2,
		cols: 16
	});
	
	lcd.on("ready", function() {
		lcd.clear().setCursor(0,0).print("Fetching Weather");
		request("http://api.openweathermap.org/data/2.5/weather?q="+currentCity+","+countryCode.toLowerCase()+"", function(error, response, body) {
			console.log("Request Successful");
			weatherData = JSON.parse(body);
			city = weatherData.name;
			if (temperatureFormat === "C") {
				temperature = kelvinToCelsius(weatherData.main.temp);
				temperatureLow = kelvinToCelsius(weatherData.main.temp_min);
				temperatureHigh = kelvinToCelsius(weatherData.main.temp_max);
			} else if (temperatureFormat === "F") {
				temperature = kelvinToFahrenheit(weatherData.main.temp);
				temperatureLow = kelvinToFahrenheit(weatherData.main.temp_min);
				temperatureHigh = kelvinToFahrenheit(weatherData.main.temp_max);
			} else {
				throw "Invalid Temperature Format!";
			}
			description = weatherData.weather[0].description;

			fireItUp(); // Send weather data to the screen
		});
	});

	function fireItUp() {
			var degCharMap = [4,10,4,0,0,0,0]; // Make a custom degree symbol
			lcd.createChar("deg", degCharMap); // Assign it as a usuable char in the lcd
			lcd.useChar("deg"); // Use dat sheet
			lcd.clear().setCursor(0,0).print(city); // Write city name
			lcd.setCursor(numberCols-4, 0).print(temperature).setCursor(numberCols-2, 0).print(":deg:").setCursor(numberCols-1, 0).print(temperatureFormat); // Write current temperature

			// The second row will cycle through the description, high and low temperatures.
			var secondLine = 0, // 0 = Description, 1 = High Temp, 2 = Low Temp
				numberMessages = 3;

			board.loop( 2000, function() {
				lcd.setCursor(0, numberRows-1).print("                "); // Clear the second line

				switch(secondLine) {
					case 0:
						lcd.setCursor(0, numberRows-1).print(description); // Describe current weather
						break;
					case 1:
						lcd.setCursor(0, numberRows-1).print("High of "+temperatureHigh+":deg:"+temperatureFormat); // Display high temperature
						break;
					case 2:
						lcd.setCursor(0, numberRows-1).print("Low of "+temperatureLow+":deg:"+temperatureFormat); // Display low temperature
						break;
				}

				secondLine++;

				if (secondLine > numberMessages-1) {
					secondLine = 0;
				}
			});
	}
	
});