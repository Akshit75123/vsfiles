#include <stdio.h>
#include <string.h>
int sum(int a, int b)
{
    return a + b;
}
int difference(int a, int b)
{
    int diff = a - b;
    if (diff > 0)
    {
        return diff;
    }
    else if(diff < 0)
    {
        diff = - diff;
        return diff;
    }
}
int product(int a, int b)
{
    return a * b;
}
int divide(int a, int b)
{
    return a/b;
}
int main()
{
    int x, y, calc;
    // char calc[] = {};

    int s, d, p, q;
    
    printf("Enter the commands for the arithematic calcualtions\n 1 - Addition \n 2 - Subtraction\n 3 - Multiplication\n 4 - Division\n");
    // gets(calc);

    scanf("%d %d", &x, &y);
    if (calc == 1)
    {
        s = sum(x, y);
        printf("The sum of %d and %d is %d\n", x, y, s);
    }
    else if (calc == 2)
    {
        d = difference(x, y);
        printf("The difference between %d and %d is %d\n", x, y, d);
    }
    else if (calc == 3)
    {
        p = product(x, y);
        printf("The product of %d and %d is %d\n", x, y, p);
    }
    else if(calc == 4)
    {
        q = divide(x, y);
        printf("The quotient of %d and %d is %d\n", x, y, q);
    }
    return 0;
}