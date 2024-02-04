#include <stdio.h>
int main (){
    int i=2;
    int n;
    int prime;
    printf ("Enter the value of n\n");
    scanf("%d",&n);
    do {
        if (n%i==0){
        prime =0;
        }
        i++;
    }while (i<n);
    if (prime ==0){
        printf ("The number is not prime\n");
    }
    else{
        printf ("The number is prime\n");
    }
    return 0;
}