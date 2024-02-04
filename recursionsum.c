#include <stdio.h>
int add(int n);
int main(){
    int n;
    printf ("Enter the number\n");
    scanf ("%d",&n);
    printf("Sum =%d",add(n));
    return 0;
}
int add(n){
    if(n!=0){
    return n+ add(n-1);
    }
}