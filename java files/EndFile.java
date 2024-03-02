import java.util.*;

public class EndFile {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        String[] arr = new String[4];

        for (int i=1; i<=3; i++){
            arr[i]=sc.nextLine();
        }
        // String s1 = "Hello world";
        // String s2 = "I am a file";
        // String s3 = "Read me untill end-of-file";

        // int n= arr.length();

        for (int i=1; i<=3; i++){
            System.out.println(i+ " " + arr[i]);
        }

        sc.close();
    }
}
