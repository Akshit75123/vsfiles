class A{
    public void f1(int a){
        System.out.println("Class A");
    }
}
class B extends A{
    public void f1(int x, int y){
        System.out.println("Class B");
    }
}

public class FO {
    public static void main(String[] args) {
        B obj=new B();
        obj.f1(5);
        obj.f1(5, 6);
    }
}
//function overloading-- different signature i.e. different no of arguments.
// both the methods can be in same class, one in child and other in superclass and both can be in superclass or child class  -- Polymorphisim

// Function overriding - signature of the function is same... both function cannot be in same class as it may produce an error. 
// So both the methods needs to be in different classes. 
// Preference order -- Child class order 