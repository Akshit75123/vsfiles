#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[5] = {3, 5, 6, 3, 7};
    for (int i = 0; i < 5; i ++)
    {
        if(arr[i] = arr[i+1])
            printf("%d\n", i);
        else
            printf("no duplicate\n");
    }
    return 0;
}
