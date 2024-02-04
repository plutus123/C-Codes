#include<stdio.h>
int main (){
    int i;
    int sum=0;
    for (i=0;i<=10;i++){
        sum=sum+8*i;
    }
    printf ("The value of sum is %d",sum,sum+8*i);
    return 0;
}