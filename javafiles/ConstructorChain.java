class X{ //superclass
    public X(){
        int y;
        System.out.println("A 1");
    }
}

class Y extends X{ //sub class
    int  x;
    public Y(){ //super()  is called by compiler if this is not mentioned
        this(4); // it will allow the compiler to first call the compiler of sub-class (argumented)
        System.out.println("B 1");
    }

    public Y(int e){ //
        super(); // this is written by compiler by default..
        System.out.println("B 2");
    }
}

public class ConstructorChain {
    public static void main(String[] args) {
        Y obj1=new Y();
        obj1.x=9;
        // obj1.y=9; not true..
    }
}
