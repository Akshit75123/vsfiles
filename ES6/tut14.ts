let displayMoreColors=(message:string, ...colors:string[])=> { 
    console.log(Message);
    for(let i in colors){
        console.log(colors[i]);
        
    }
}
let Message="List of Colors";
let colorArray=["Orange", "Yellow","Indigo"];

displayMoreColors(Message, ...colorArray); //spread opertor --> it will convert the colorArray into individual values. It will be written while calling the function.
// It is opposite to rest operator. -->which forms the array from the individual values.

