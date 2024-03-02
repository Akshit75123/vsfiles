abstract class Person{ //cannot create objects of abstract class
    private String name;
    private int age;
    public void setName(String n){name=n;}
    public void setAge(int a){age=a;}
}

class B1 extends Person{

}

public class Abstract {
    public static void main(String[] args) {
        // Person p=new Person(); //can't instantiated
        Person o1=new B1(); // reference variable of Person class. i.e. we can form reference variable of superclass.
        //we can form reference variable of abstract class.
    }
}
