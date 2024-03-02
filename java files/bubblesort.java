public class bubblesort {
    
    public static void sort(int[] arr){
        int temp=0;
        int s = arr.length;
        for (int i=0; i<s;i++){
            for (int j=1; j<s-i; j++){
                if (arr[j-1]>arr[j]){
                    temp =arr[j-1];
                    arr[j-1] = arr[j];
                    arr[j]=temp;
                }
            }
        }
    }

    public static void getArray(int[] arr){
        int s = arr.length;
        for (int i=0; i<s; i++){
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
    
    public static void main(String[] args) {
        int[] arr = {2, 1, -6, 4, 3, 9, 5};
        System.out.println("The given array is");
        getArray(arr);

        sort(arr);
        
        System.out.println("The sorted array is");
        getArray(arr);
    }
}
