function greetPerson(name) {
    // var greet;
    if (name === "Chandler") {
        greet = "Hello Chandler";
    }
    else {
        greet = "Hi there";
    }
    console.log(greet);
    var greet;
}
greetPerson("Chandler");
//hoisting and functional scope --> var greet can be declared anywhere in the function even after the console.log()