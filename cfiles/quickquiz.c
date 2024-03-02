#include <stdio.h>
int twoNumbers(int *num1, int *num2)
{
    int sum = *num1 + *num2;
    int diff = *num1 - *num2;
    if(diff > 0)
        diff == diff;
    else if (diff < 0)
        diff == - diff;
    
    return sum, diff; 
}
int main()
{
    int a, b, sum, diff;
    scanf("%d %d", &a, &b);
    twoNumbers(&sum, &diff);
    return 0;
}   
    
    
