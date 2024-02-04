#include<stdio.h>
int main(){
    int i=10;
    int n;
    int table;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    do{
        table =n*i;
        printf ("%dX%d=%d\n",n,i,table);
        i--;
    }while (i>=1);
    return 0;
}