#include <stdio.h>
int main(){
    int i=0;
    int n;
    int sum=0;
    printf ("Enter the value of n\n");
    scanf ("%d",&n);
    while (i<=n){
        sum+=i;
        i++;
    }
    printf ("The value of sum of numbers is %d",sum);
    return 0;
}