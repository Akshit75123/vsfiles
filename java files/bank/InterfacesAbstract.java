interface Animal{
    // interfaces doesn't have contructors
    // doesn't have non-abstractive functions..
    public void walk();
    // void eat() {

    // } // non-abstractive functions..
}

interface Herbivore{

}

class Horse implements Animal, Herbivore{    // this is called mutiple inheritence -- it cannot be done using classes but using interfaces... 
    public void walk(){
        System.out.println("Walk on 4 legs");
    }
}
public class InterfacesAbstract {
    public static void main(String[] args){
        Horse horse = new Horse();
        horse.walk();
    }
}


