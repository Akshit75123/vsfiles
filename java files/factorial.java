public class factorial {
    
    public static int getFactorial(int n){
        int f = 1;
        for (int i=1; i<=n; i++){
            f*=i;
        }
        return f;
    }
    
    public static void main(String[] args) {
        
        System.out.println("The factorial of 5 is" + " " + getFactorial(5));
        System.out.println(getFactorial(11));
        System.out.println(getFactorial(6));
        // getFactorial(11);
        // getFactorial(3);

    }
}
