var getNValue=function(value=10,bonus=5){ //default value of the parameter. 
    console.log(value+bonus);
}

let percentBonus=()=>0.1;

let newValue=(value=9,bonus=value*percentBonus())=> {console.log(value+bonus);}

getNValue(); //15
getNValue(30); // 35
getNValue(20,30); //50
getNValue(undefined,30); //undefined=default i.e. 35
newValue(30);
