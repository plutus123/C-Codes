#include <stdio.h>
int fib(int n);
int main(){
    int n;
    printf("Enter the value\n");
    scanf("%d",&n);
    printf ("Series =%d",fib(n));
    return 0;
}
int fib(int n){
    if (n<=1)
    return n+fib(n-1)+fib(n-2);
}