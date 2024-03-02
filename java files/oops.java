//the theme 'shades of purple is best for Java'
import java.util.*;
import bank;

class Pen{
    String color;
    String type; // ballpoint, gelpoint

    public void write() {
        System.out.println("Writing Something");
    }

    public void printColor() {
        System.out.println(this.color);
    }
}

class Student{
    String name;
    int age;

    public void printInfo(){
        System.out.println(this.name);
        System.out.println(this.age);
    }

    // three types of constructors :- 
    // 1. non-parametrised constructors 
    // 2. parametrised constructors 
    // 3. copy constructors 
    // calling of non-parametrised constructor
    // Student() {
    //     System.out.println("contructor called");
    // }

    // parametrised constructors
    // Student(String name, int age){
    //     this.name = name;
    //     this.age = age;
    // }

    //copy constructors -- copies other object's members
    Student(Student s2){
        this.name = s2.name;
        this.age =s2.age;
    }

    Student(){

    }

}

public class oops {
    public static void main(String[] args){
        Pen pen1 = new Pen(); 
        // Pen() is a constructor(a type of method or function which doesn't return anything). It is called only once in the program.
        pen1.color= "Blue";
        pen1.type= "gel";

        Pen pen2 = new Pen();
        pen2.color = "Red";
        pen2.type = "ball";

        // pen1.printColor();
        // pen2.printColor();   

        // Student s1 = new Student();  for non-parametrised constructors.
        //Student s1 = new Student ();

        // for parametrised constructors
        // Student s1 = new Student("Aman", 24);


        // for copy constructors

        Student s1 = new Student();
        s1.name = "Aman";
        s1.age = 25;

        Student s2 = new Student(s1); // copies object s1 into s2

        s2.printInfo();
    }
}
