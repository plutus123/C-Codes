#include<stdio.h>
int main(){
    int i=10;
    int n;
    printf ("Enter the value of n\n");
    scanf ("%d",&n);
    do {
        printf ("%d X %d=%d\n",n,i,i*n);
        i--;
    }while(i>=1);
    return 0;
}