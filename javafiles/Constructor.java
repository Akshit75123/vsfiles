public class Constructor {
    private int l,b,h;
    public Constructor(){
        l=8; 
        b=10; 
        h=4;
    } //constructor

    public Constructor(int L, int B, int H){
        l=L;
        b=B;
        h=H;
    }
    public static void main(String[] args){
        Constructor b1=new Constructor(); //constructor with object
        Constructor b2=new Constructor(20, 15, 5);

    }
}
