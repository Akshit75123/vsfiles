public class Codingninjas {
    public static void getArray(int[] arr) {
        for(int i=0;i<arr.length;i++){
            System.out.println(arr[i]);
        }
    }
    
    public static void reverseArray(int []arr, int m) {
        int start=m+1, temp=0;
        int end=arr.length-1;
        while (start<=end) {
            // swap(arr[start], arr[end]);
            temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
        }
    }
    public static void main(String[] args) {
        int[] arr=new int[] {10,9,8,7,6};
        System.out.println("the givenarray is");
        getArray(arr);


        reverseArray(arr, 2);
        System.out.println("the reversed array is");
        getArray(arr);


    }
}