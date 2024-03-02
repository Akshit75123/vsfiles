import java.util.*;
public class twoDarray1 {
    
    public static void search(int arr[][], int rows, int cols, int key){
        for (int i=0; i<rows; i++){
            for (int j=0; j<cols; j++){
                if (arr[i][j] == key){
                    System.out.print(i + " " + j);
                }
            }
        }
    }

    
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int rows = sc.nextInt();
        int cols = sc.nextInt();

        int [][] arr = new int[rows][cols];

        for (int i=0; i<rows; i++){
            for (int j=0; j<cols; j++){
                arr[i][j] = sc.nextInt();
            }
        }
        

        int key = sc.nextInt();
        search(arr, rows, cols, key);
        sc.close();
    }
}
