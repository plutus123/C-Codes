#include <stdio.h>
int main(){
    int i=0;
    int sum=0;
    int n=10;
    while (i<=n){
        sum +=i;
        i++;
    }
        printf("The value of sum(1 to 10) is %d\n",sum);
    return 0;
}