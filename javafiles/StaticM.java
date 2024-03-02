class Parent{
    static int y;
    public static void fun(){
        System.out.println("Hello");
        
    }
}

class Child extends Parent{
    static{
        y=7;
    }
}

public class StaticM {
    public static void main(String[] args) {
        Child.fun(); // Child class can inherit static member functions but cannot inherit static member variable.
        System.out.println(Child.y); // 0 will be printed i.e. value of parent class 
    }
}
// if both child and parent class both are containing static member of same name then it is called function hiding and while calling child class function is executed.

//func. overriding - conflicting between same instance member function 
//func. hiding - conflicting between same static member function.

