#include <stdio.h>
int main(){
    int i;
    int sum=0;
    int p;
    for (i=0;i<=10;i++){
        p=8*i;
        sum+=p;
    }
    printf("The value of sum is %d",sum);
    return 0;
}