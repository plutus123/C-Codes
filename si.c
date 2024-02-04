#include<stdio.h>
int main(){
    int principal;
    int rate;
    int time;
    printf("Enter the principal value\n");
    scanf("%d",&principal);
    printf("Enter the rate\n");
    scanf("%d",&rate);
    printf("Enter the time\n");
    scanf("%d",&time);
    printf("The simple interest is %f",principal * rate * time * 0.01);
    return 0;
}