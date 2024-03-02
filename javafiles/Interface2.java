interface I3{
    void f1();
}

interface I4{
    void f2();
}

class CL implements I3, I4{
    public void f1(){} //overridden
    public void f2(){} //overridden
    public void f3(){}
}

public class Interface2 {
    public static void main(String[] args) {
        CL obj=new CL(); //object and refernce variable of class CL
        // I1 obj1=new CL(); //reference variable of interface I1
        obj.f1();
        obj.f2();
        obj.f3();
        // obj1.f1();
        
    }
}
