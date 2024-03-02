#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    printf("The zeroth element of the array is %d\n", arr[0]);
    printf("The address of 0th element of the array is %d\n", &arr[0]); 
    printf("The address of 0th element of the array is %d\n", arr); 
    // 6 and 7 lines are same 
    // &arr[i] = arr + i
    printf("The address of 1st element of the array is %d\n", &arr[1]); 
    printf("The address of the 1st element be %d\n", arr + 1);
    // 8 and 9 lines are same 
    return 0;
}