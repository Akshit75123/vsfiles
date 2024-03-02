public class ClassObjects {
    class Box{
        private int lenght, breadth, height; //these are instance membered variable..   
        public void setDimension(int l, int b, int h){
            lenght=l;
            breadth=b;
            height=h; 
        }
        public void showDimension(){
            System.out.println("L="+lenght);
            System.out.println("B="+breadth);
            System.out.println("H="+height);
        } // these are also instance membered functions..
    }
    
        public static void main(String[] args) {
            ClassObjects outerObject =new ClassObjects();
            Box smallBox=outerObject.new Box(); // smallBox is not the name of object, it is a reference variable(pointer in C++). It stores the address of the object which contains properties lenght, breadth and height.
            
            smallBox.setDimension(12, 10, 5);
            smallBox.showDimension();
            smallBox=outerObject.new Box();
            smallBox.showDimension();

        }

    
}
