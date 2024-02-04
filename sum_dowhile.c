#include <stdio.h>
int main(){
    int i=0;
    int n;
    int sum =0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    do {
        sum+=i;
        i++;
    }while(i<=n);
    printf ("The value of sum is %d",sum);
    return 0;
}