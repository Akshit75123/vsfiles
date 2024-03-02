let displayColors=(message:string, ...colors:string[])=> { //the parameters are called as rest operators --> passing as much arguments in the function at the time of calling and converts all the multiple arguments in the form of an array.
    console.log(message);
    for(let i in colors){
        console.log(colors[i]);
        
    }
}
let message="List of Colors";
displayColors('Red');
displayColors('Red','Blue');
displayColors('Red','Blue','Green');
