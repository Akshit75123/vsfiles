//Rest Operators

var displayColors = function (message) {
    var colors = [];
    for (var _i = 1; _i < arguments.length; _i++) {
        colors[_i - 1] = arguments[_i];
    }
    console.log(message);
    for (var i in colors) {
        console.log(colors[i]);
    }
};
var message = "List of Colors";
displayColors('Red');
displayColors('Red', 'Blue');
displayColors('Red', 'Blue', 'Green');
