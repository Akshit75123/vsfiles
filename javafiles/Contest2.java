import java.util.*;

public class Contest2{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while (t-->0) {
            int l=sc.nextInt();
            int r=sc.nextInt();
            int m=sc.nextInt();

            float pages=(float)m/l;
            float lines=(float)m/r;

            System.out.println(pages);
        }
    }
}

            