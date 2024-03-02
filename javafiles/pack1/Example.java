package pack1;
import pack2.Student;
public class Example {
    public static void main(String[] args) {
        Student s1=new Student();
        s1.setRollno(1028);
        s1.setName("Akshit");
        System.out.println("RollNo:" + s1.getRollno(1028));
        System.out.println("Name:"+s1.getName());
    }
}
