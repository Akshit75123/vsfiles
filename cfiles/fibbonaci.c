

#include <stdio.h>
int Fib(int n){
    if (n==1 || n==2){
        return 1;
    }
    else {
        return (Fib(n-1)+ Fib(n-2));
    }
}

void main(){
    printf("The %d element of series is %d", 6, Fib(6));
}