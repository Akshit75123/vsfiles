#include <stdio.h>
int main()
{
    int m = 6;
    for(int i = 1; i < m; i ++)   
    {
        for (int j = 1; j < m; j ++) 
        {
            if(i == 1 && i == 3 && i == 5)
            {
                printf("%d\t", j);
            }
            else 
            {
                printf("%d\t", m - j - i);
            }
        }
        m --;
        printf("\n");
    }
    return 0;
}