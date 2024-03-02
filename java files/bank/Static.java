// package bank;

class Student{
    String name;
    static String school; // it is used when the properties of variable is same for all the objects...
}

public class Static {
    public static void main(String[] args){
        String school="GMS";
        Student student =new Student();
        student.name="Rohit";
        System.out.println(student.school);
    }
}
