function greetHim(name) {
    var greet;
    if (name === "Chandler") {
        greet = "Hello Chandler";
    }
    else {
        greet = "Hi there";
    }
    console.log(greet);
}
function greetHer(name) {
    if (name === 'Diana')
        greet = "Hello Diana"; //different from let
    else
        greet = "Hi there"; //different from let
    console.log(greet);
    var greet;
}
greetHim("Chandle");
greetHer("Diana");
//var declarartion gives us functional scope and let declaration gives us block scope
// let declaration is not hoisted. i.e. it has to be declacred before using it unlike var.
//let cannot be declared unlike var.
// var a = 1;
// var b = 2;
// if (a === 1) {
//     var a = 10;
//     var b_1 = 20;
//     console.log(a); //10
//     console.log(b_1); //20 (only in this block)
// }
// console.log(a); //10
// console.log(b); //2
// var c = 1;
// var c = 2;
// var d = 2;
// // let d=9;
// d = 9;
