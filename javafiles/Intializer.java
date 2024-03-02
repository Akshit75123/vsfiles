// public class Intializer {
//     private int x; //instance membered variable
//     {
//         System.out.println("Intialization Block:x="+x);
//         x=5;
//     } // instance inialization block
//     // instance of the class is created 
//     // return keyword cannot be used in Inialization block 
    

//     public Intializer(){
//         System.out.println("Constructor:x="+x);
//     }

//     public static void main(String[] args){
//         Intializer i1=new Intializer();
//         Intializer i2=new Intializer();
//     }
// }

public class Intializer{
    private static int k;
    static{
        System.out.println("Static Initialization block:k="+k);
        k=10;
    }
    public static void main(String[] args) {
        new Intializer();
    }
}