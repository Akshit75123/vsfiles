public class Final {
    private int x; //instance variable or instance membered variable .... instance means object.
   

    private final int y=9; // final instance variable value assigned. -- method 1
    //A variable that is declared final and not initialized is called a blank final variable. A blank final variable forces either the constructors to iniatialize or initialization block to do this job.
    
    //initailizer block
    {
        // y=10; method 2
    }
    //constructors
     public Final(){
        System.out.println(x);
        // y=89; //method 3
    }
    public static void main(String[] args){
        // ClassObjects outerObjects=new ClassObjects();
        Final f1=new Final();
    }
}


//FINAL STATIC VARIABLE 
// private final static int r=7; 
// static member variable when qualified with final keyword, it becomes blank untill initialized.
// Final static variable can be iniatiazed during the declaration or within the static block.

//FINAL LOCAL VARIABLE -- VARIABLE INSIDE FUNCTION
// public void fun(){
//     int k; // local variable is initially blank. first need to be assinged
//     final int j; these are also blank by default but the difference b/w final and non-final local variable is that once final variable are assigned cannot be changed again and again.
//     like
//     // k=k+1;

// }

// FINAL CLASS 
// final class Dummy{
//     //if class becomes final, it cannot be inherited i.e. we cannot say it a superclass
// }

// FINAL METHODS 

// methods declared as final cannot be overridden