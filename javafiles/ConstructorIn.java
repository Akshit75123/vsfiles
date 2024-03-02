class E{
    int a;
    public E(){
        System.out.println("E");
    }
    //argumented constructor
    public E(int x){
        a=x;
        System.out.println("A");

    }
}

class F extends E{
    public F(){
        // super(); optional to write-- it calls the parent class constructor first.
        //super(4); in case of argumented constructor of parent class --super with argument is neccassary.
        System.out.println("F");
    }
}

public class ConstructorIn {
    public static void main(String[] args) {
        F obj=new F(); 
        //before child constructor being called, child class constructor calls constructor of parent class is called.
        //sub class's constructor invokes constructor of super class.
        // Explicit call to the super class constructor from sub class's constructor can be made using super()

    }
}
