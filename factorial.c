#include <stdio.h>
int main()
{
    int i;
    int n;
    int factorial = 1;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("The factorial of %d is %d\n",n,factorial);
    return 0;
}