var getRegvalue=function(){
    return 10;
}
console.log(getRegvalue()); //10

const getArrowValue= () => {
    return 10;
}

// for a single statement in the body of the function -- remove all braces 
const getValue=()=> 10;

console.log(getArrowValue()); //10
console.log(getValue()); //10

const getNewvalue=(m: number)=> 10*m;
console.log(getNewvalue(5)); //50


console.log(typeof getNewvalue(5)); //function 