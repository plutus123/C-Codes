#include <stdio.h>
int main(){
    int a=0;
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    do {
        printf("The number is %d\n",a+1);
        a++;
    }while(a<n);
    return 0;
}