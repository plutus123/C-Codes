#include <stdio.h>
int main (){
    int n ;
    int i=10;
    printf ("Enter the vaue of n\n");
    scanf ("%d",&n);
    while (i>=1){
        printf("%d X %d=%d\n",n,i,n*i);
        i--;
    }
    return 0; 
}