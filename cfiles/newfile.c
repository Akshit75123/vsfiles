#include <stdio.h>
int func (int n)
{
    int a = 0, b;
    
    for (int i = 1; i < n; i ++)
    {
        b = a + i;

    }
    return b;
}
int main()
{
    int c, e;
    scanf("%d", &e);
    c = func(e) + func(e - 1);
    printf("%d", c);
}
