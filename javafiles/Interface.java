interface SomeName{
    void function(); // public static function. variables inside interface are public static and final
    // interface  does not have objects and contructors
    // it has only variables and abstract methods
}
class M implements SomeName{
    public void function(){} //overriding of the function.
    // if a class that implements an interface does not define all the methods of the interface, then it must be declared abstract and the methods definitions should be provided by the subclass that extends the abstract class 
}

public class Interface {
    
}

//multiple interference of interface are possible-->
interface i1{}
interface i2{}
interface i3 extends i1, i2{}

class S implements i3 {} // it must override all the functions which are present in interface i1, i2 and i3.
class W extends A implements i1, i2{}
// we can form reference variable of interface
