#include <stdio.h>
int main(){
    int i;
    int n;
    int sum=0;
    printf ("Enter the value of n\n");
    scanf("%d",&n);
    for(i=0;i<=10;i++){
        sum=sum+i*n;
    }
    printf ("The value of sum is %d",sum,sum+i*n);
    return 0;
}