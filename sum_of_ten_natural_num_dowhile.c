#include <stdio.h>
int main (){
    int i =0;
    int n=10;
    int sum=0;
    do {
    sum+=i; 
    i++;
    }while(i<=n);
    printf("The sum of ten natural numbers is %d\n",sum);
    return 0;
}