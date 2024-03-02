var firstname = "Chandler";
var lastname = "Bing";
// let  person={
//     firstname:firstname, //Syntax -> property:variable
//     lastname:lastname
// }; 
//this is called as object literal
// Simplified writing in ES2015  for an object 
// if the property name of the object and the variable name is same 
var newPerson = {
    firstname: firstname,
    lastname: lastname,
};
// this is shorthand notation in ECMAScript2015
function creatPerson(firstname, lastname) {
    var fullname = firstname + " " + lastname;
    return { firstname: firstname, lastname: lastname, fullname: fullname };
}
function createHuman(firstname, lastname, age) {
    var fullname = firstname + " " + lastname;
    return {
        firstname: firstname,
        lastname: lastname,
        fullname: fullname,
        isSenior: function () {
            return age > 60;
        }
    };
}
var p = creatPerson("Ross", "Geller"); //object of the function
console.log(p.firstname);
console.log(p.lastname);
console.log(p.fullname);
var h = createHuman("Akshit", "Panwar", 20);
console.log(h.firstname);
console.log(h.lastname);
console.log(h.fullname);
console.log(h.isSenior());
// console.log(person.firstname);
// console.log(person.lastname);
