#include <stdio.h>
void main() 
{
    int n, sum = 0;
    // int sum = 0;
    printf("Enter the maximum lenght of the array\n");
    scanf("%d", &n);
    int a[4] = {2,5,6,4};
    printf("enter the array elements\n");
    for(int i = 0; i < 3; i++)
    {
        scanf("%d\n", &a[i]);
        
    }
    printf("The entered values are : \n");
    for(int j = 0; j < 3; j++)
    {
        printf("%d\n", a[j]);
    }
    // printf("the sum of the array is %d\n", sum);
}