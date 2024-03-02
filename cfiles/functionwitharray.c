#include <stdio.h>
void printArray(int arr[])
{
    for (int i = 0; i <= 4; i ++)
    {
        printf("%d\n",arr[i]);
        
    }
}
int main()
{
    int array[5] = {23, 56, 76, 44};
    printArray(array);
    return 0;
}