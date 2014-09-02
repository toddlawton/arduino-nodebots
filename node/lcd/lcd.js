var five = require("../johnny-five/lib/johnny-five"),
    board = new five.Board();
 
board.on("ready", function() {
	var lcd = new five.LCD({
		// LCD pin name  RS  EN  DB4 DB5 DB6 DB7
		// Arduino pin # 12  11   5   4  3  2
		pins: [ 12, 11, 5, 4, 3, 2 ],
		rows: 2,
		cols: 16
	});
 
	lcd.on("ready", function() {

		var frame = 1, col = 0, row = 0;
		lcd.useChar("duck");

		board.loop( 300, function() {
			// Add a new character on each movement
			var newNumber = Math.floor((Math.random() * 12500) + 1);
			lcd.clear().setCursor( col, row ).write(newNumber);

			if ( ++col === lcd.cols ) {
				col = 0;
				if ( ++row === lcd.rows ) {
					row = 0;
				}
			}
		});
	});
});