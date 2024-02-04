#include<stdio.h>
int main(){
    int i;
    int n;
    int sum=0;
    printf ("Enter the value of n\n");
    scanf ("%d",&n);
    for (i=0;i<=n;i++){
       sum+=i;
    }
    printf ("The value of sum is %d\n",sum);
    return 0;
}
