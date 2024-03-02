#include <stdio.h>
int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        /* code */
        printf("The value at %d is %d\n", i, array[i]);
    }
    
    return 0;
}
int main()
{
    int arr[4] = {2, 5, 7, 4};
    func1(arr);
    return 0;
}