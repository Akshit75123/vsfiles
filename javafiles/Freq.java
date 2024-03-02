import java.util.*;
public class Freq {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int[] arr=new int[6];
        int count=0;
        int[] freq=new int[6];

        for (int i=0;i<arr.length;i++){
            arr[i]=sc.nextInt();
            freq[i]=-1;
        }
        for (int i=0;i<arr.length;i++){
            count=1;
            for (int j=i+1;j<arr.length;j++){
                if (arr[i]==arr[j]){count++; freq[i]=0;}
            }
            if (freq[i]!=0){
                freq[i]=count;
            }
        }
        System.out.println("Frequency of all the elements of array: n");
        for (int i=0;i<arr.length;i++){
            if(freq[i]!=0){
                System.out.println(arr[i]+"occurs"+freq[i]+"times"+"n");
            }
        }
        

    }
}
