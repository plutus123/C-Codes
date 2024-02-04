#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
    if (a == 1)
    {
        printf("The value of number is 1\n");
    }
    else if (a == 2)
    {
        printf("The value of number is 2\n");
    }
    else if (a == 3)
    {
        printf("The value of number is 3\n");
    }
    else
    {
        printf("The value of number is not 1,2,3\n");
    }
    return 0;
}
