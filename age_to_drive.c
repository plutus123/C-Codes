#include <stdio.h>
int main(){
    int a ;
    int vippass =0;
    vippass = 1;
    printf ("Enter the number\n");
    scanf ("%d",&a);
    if ((a<70 && a >18) || vippass==1)
    {
        printf("You are allowed to drive\n");
    }
    return 0;
}