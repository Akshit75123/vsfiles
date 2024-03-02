//String Templates--->
var user = "Chander";
var n = "Panwar";
var greet = "Welcome" + user + "to ES2015"; //basic techqiue -- concatenation
// using string literal means using back ticks
var newGreet = "Welcome ".concat(user, " to ES2015");
var moreGreet = "Welcome \"Akshit ".concat(n, "\" to ES2015");
var para = "this is the first line\n          this is the secone line\n          this is the third\n          and so.... on.\n";
console.log(greet);
console.log(newGreet);
console.log(moreGreet);
console.log(para);
