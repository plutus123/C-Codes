#include <stdio.h>
int main(){
    int prime=1;
    int a;
    printf("Enter the value of a\n"); 
    
    scanf("%d",&a);
    for (int i=2;i<a;i++){
        if (a%i==0){
            prime=0;
            break;
        }

    }
    if (prime==0){
        printf("The number is not a prime\n");
    }
    else {
        printf ("The number is prime\n");
    }
    return 0;
}