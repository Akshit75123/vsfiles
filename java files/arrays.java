import java.util.*;
public class arrays {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();

        //defining the array
        int numbers[] = new int[size];

        //taking input in array

        for (int i = 0; i<size; i ++) {
            numbers[i]=sc.nextInt();
        }
        sc.close();
        System.out.println("The output is ");
        // traversing the array
        for (int i=0; i<size; i++){
            System.out.println(numbers[i]);
        }
        // In Java, array has null default values
    }
}
