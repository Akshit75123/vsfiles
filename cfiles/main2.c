#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int A[num];
    int B[num];
    scanf("%d", &num);
    for (int i = 0; i < num; i ++)
    {
        scanf("%d", &A[i]);
        
    }
    for(int j = 0; j < num; j ++){
        B[j] = A[num - j];
        printf("%d", B[j]);
    }
    
    return 0;
}
