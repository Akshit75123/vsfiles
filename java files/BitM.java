public class BitM{
    public static void main(String[] args){
        int n=5;
        int pos=2;
        int bitmask=n<<pos;

        if((bitmask & n) == 0){
            System.out.println("bit was zero");
        } else {
            System.out.println("");
        }
    }
}