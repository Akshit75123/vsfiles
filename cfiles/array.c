#include <stdio.h>
int main()
{
    // int arr[8] = {4, 6, 7, 8, 6, 5, 4, 3};
    int sizeofarray;
    printf("enter the size of the array\n");
    scanf("%d", &sizeofarray);
    int arr[] = {};
    int j = 0;
    printf("enter the corresponding values of the array");
    while(j < sizeofarray)
    {
        scanf("%d\n", &arr[j]);
        j ++;
        printf("the value of %d\t index of the array is %d\n", j, arr[j]);
    }
    
    // for(int i = 0; i < sizeofarray; i ++)
    // {
    //     printf("the value of %d\t index of the array is %d\n", i, arr[i]);
    // }
    return 0;
}