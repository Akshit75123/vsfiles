abstract class New{ // it needs to be abstract because of the abstract method present in the function.
    abstract void show();
}

abstract class NewS extends New{ //it has to be abstract because it has inherited a class which already has abstract method present in it.
    

}

public class AbstractMethods {
    public static void main(String[] args) {
        // NewS s=new NewS(); No object of abstract class.
    }
}
