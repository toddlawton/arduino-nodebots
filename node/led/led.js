var five = require("../johnny-five/lib/johnny-five"),
    board = new five.Board();

board.on("ready", function(){
	var led = new five.Led(13);
	led.strobe();
});    