class Box{
    private int l,b,h;
    public void setDimension(int l, int b, int h){
        this.l=l; this.b=b; this.h=h; // this.l is instance member variable
    }
}

public class This {
    public static void main(String[] args) {
        Box b1=new Box();
        b1.setDimension(12, 10, 5);

    }
}

//this object refernce is a local variable in instance member methods refering the caller object.
// this keyword is used as a refernce to the current object which is an instance of the current class.
// The this reference to the current object is useful in situations where a local variable hides, or shadows, a field with the same name.
