#include <stdio.h>
// void swap(int *x, int *y)
// {
//     int temp;
//     temp = *x;
//     // return *x;
//     *x = *y;
//     *y = temp;
//     return;
// }

// void swapwithoutpointer(int x, int y)
// {
//     int c;
//     c = x;
//     x = y;
//     y = c;
//     return;
// }
void changeValue(int *address)
{
    *address = 345;
}
int main()
{
    int a = 34, b = 74;
    printf("the initial value of a is %d\n", a);
    changeValue(&a);
    printf("the final value of a is %d\n", a);
    return 0;
}

// swap function is being called using by reference
// swapwithoutpointer is being called by just values