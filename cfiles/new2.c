#include <stdio.h>
int main()
{
    int arr[10];
    int count = 0, k;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < 10; j++)
    {
        printf("the array elements of %d indexes are %d\n", j, arr[j]);
    }
    for (k = 0; k < 10; k++)
    {
        if (arr[k] = arr[k + 1])
        {
            count += k;
        }
    } printf("the no of times %d is repeating is %d\n", arr[k], count);

    return 0;
}