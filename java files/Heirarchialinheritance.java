
//this is called base class
class Shape{
    String color;

    public void area(){
        System.out.println("Displays Area");
    }
}
// this is called derived class
class Triangle extends Shape{
    public void area(int l, int h){
        System.out.println(1/2*l*h);
    }
}

class Circle extends Shape{
    public void area(int r){
        System.out.println(3.14*r*r);
    }
}

public class Heirarchialinheritance { 
    public static void main(String[] args) {
        
    }
}
