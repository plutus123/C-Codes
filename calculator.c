#include <stdio.h>
int main(){
    char operator;
    int a,b;
    int sum,multiplication,division,substraction;
    printf ("Enter the operator\n");
    scanf("%c",&operator);
    printf ("Enter the value of a\n");
    scanf("%d",&a);
    printf ("Enter the value of b\n");
    scanf("%d",&b);
    switch(operator){
        case'+':
        sum =a+b;
        printf ("sum=%d\n",sum);
        break;
        case'-':
        substraction =a-b;
        printf ("substraction=%d\n",substraction);
        break;
        case'*':
        multiplication =a*b;
        printf ("multiplication=%d\n",multiplication);
        break;
        case'/':
        division =a/b;
        printf ("division=%d\n",division);
        break;
        default:
        printf ("Enter valid operator\n");
        break;
    }
    return 0;
}