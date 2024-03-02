import java.lang.String;

public class Inheritence2 {
    public static void main(String[] args) {
        Inheritence1 s1=new Inheritence1();
        Inheritance s2=new Inheritance();
        s1.setRollno(1028);
//        s1.setName("Akshit");
        s1.setAge(18);
        // s2.setRollno(1029);
//        s2.setName("Rohit");
        s2.setAge(19);

        System.out.println("Rollno:"+s1.getRollno());
        System.out.println("Name:"+s1.getName());
        System.out.println("Age:"+s1.getAge());
        // System.out.println("Rollno:"+s2.getRollno());
        System.out.println("Name:"+s2.getName());
        System.out.println("Age:"+s2.getAge());
    }
}
// each class is allowed to have one direct superclass, and each superclass has the potential for an unlimited number of subclasses.

// private members of the superclass are not accessible by the subclass and can only be indirectly accessed.

// members that have default accessibility in the superclass are also not accessible by subclass in other packages.