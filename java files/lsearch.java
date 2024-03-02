import java.util.*;
public class lsearch {
    
    public static void linearSearch(int[] arr, int key){
        for (int i=0; i<arr.length; i++){
            if (arr[i] == key) 
                System.out.println("This number is present at" + " " + i + " " +"position");
            
        }
    }
    
    public static void main(String[] args) {
        int arr[] = {3, -2, 7, -6, 45, 88, 5};
        Scanner sc = new Scanner(System.in);
        int key = sc.nextInt();
        linearSearch(arr, key);
        sc.close();
    }
}
