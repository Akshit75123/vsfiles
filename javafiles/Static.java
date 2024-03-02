import java.lang.String;

public class Static {
    int x; // instance membered variable
    static int y=9; // static membered variable

    // static means it has unique value for the entire class 

    public void fun1(){} // instance membered function
    public static void fun(){} // static membered function

    // public void fun3(){static int z;}  this is wrong because we cannot make static variables inside the functions.
    // but we can have static inner class 

    static class Test{
        public static String country="INDIA";
    } // static inner class 

    //main function --->>
    public static void main(String[] args){
        Static ex1 = new Static();
        Static ex2 = new Static();
        // as many objects of the class Static will be formed, variable x will be formed as many times but variable y will be formed only once beacuse it is static. It will store information related to class not object

        //accessing  static variable
        Static.y=5; // value of static variable assigned...
        // Whenever '.' comes after class name, it is a static variable.

        //Static functions -->
        Static.fun(); 
        // static membered functions can only access static membered variables.... e.g. fun(){x=7} --> it is wrong as x is instance membered 
        // while  fun () {y=9} is true 
        
        // Static.Test.country;
    }
}
