public class reversearray {

    public static void swap(int a, int b){
        int temp=0;
        temp=a;
        a=b;
        b=temp;
        System.out.print(b + a);
    }
    
    public static void reverse(int arr[], int n){
        int start=0;
        int end=n-1;

        while(start<=end){
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    public static void getArray(int[] arr){
        int n=arr.length;
        for(int i=0; i<n; i++){
            System.out.println(arr[i]);
        }
    }
    
    public static void main(String[] args) {
        int[] arr = {2, 6, 7, 8, 5};

        System.out.println("The Given Array is : ");
        getArray(arr);

        reverse(arr, 5);
        System.out.println("The Reversed Array is :");
        getArray(arr);
        
    }
}
