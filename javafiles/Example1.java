import java.util.*;
public class Example1 {
    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] arr=new int[n];
        for (int i=0;i<n;i++)
            arr[i]=sc.nextInt();
        sc.close();
        int count=0;
        for (int i=0; i<n;i++){
            if (arr[i]!=0){
                count++;
                // break;
            }
            if (arr[0]==0){
                i=i+1;
            }
            else 
                break;


        }

        System.out.println(count);
    }
}
