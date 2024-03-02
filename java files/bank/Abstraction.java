abstract class Animal{
    abstract void Walk(); // abstract method
    public void eat(){
        System.out.println("Animal eats");
    } // non-abstract method 

    // creating constructor

    Animal (){
        System.out.println("Creating a new Animal");
    }
}

class Horse extends Animal{
    public void Walk(){
        System.out.println("Walk on 4 legs");
    }

    // creating a constructor
    Horse(){
        System.out.println("Creating a Horse");
    }
}

class Chicken extends Animal{
    public void Walk(){
        System.out.println("Walk on 2 legs");
    }
}

public class Abstraction {
    public static void main(String[] args){
        Horse horse = new Horse();
        // horse.Walk();

        // Animal animal = new Animal();
        // animal.Walk();
        // cannot instantaneous object animal -- its object cannot be created

        // horse.eat();
    }
}
