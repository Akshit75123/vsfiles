

#include <stdio.h>

int sum(int n){
    int s=0;
    if (n==1){
        return 1;
    }
    else {
        s=n+sum(n-1);
        return  s;
    }
}

void main(){
    int k=sum(10);
    printf("%d", k);
}