class Shape{
    public void area(){
        System.out.println("displays area");
    }
}

class Triangle extends Shape{
    public void area(int l, int h){
        System.out.println(1/2*l*h);
    }
}

//till this ... this file is an example of single level inheritence

// Now - double level inheritence 

class EquilateralTriangle extends Triangle{
    public void area(int l, int b){
        System.out.println(1/2*l*b);
    }
}

public class SingleInheritence {
    public static void main(String[] args) {
        
    }
}
