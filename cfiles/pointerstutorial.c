#include<stdio.h>
int main()
{
    // char a = 34;
    // char* ptra = &a;
    // printf("the address of the pointer to a is %c\n", &ptra);
    // printf("the value of a is %c\n", *ptra);
    // printf("%d\n", ptra);
    // printf("%d\n", ptra + 2);
    // printf("%d\n", ptra ++);
    // int B = 32;
    // int* ptrB = &B;
    // printf("the value of B is %d\n", *ptrB);
    // ptrB++;
    // printf("The value of B is %d\n", *ptrB);
    int arr[5] = {3, 6, 7, 3};
    int* ptr = arr;
    // ptr == &arr[0];
    // arr[i] = arr + i
    printf("the value of the first element of the array is %d\n", *ptr);
    return 0;
}