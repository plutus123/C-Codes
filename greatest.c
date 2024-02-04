#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the value of numbers\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("The value of a is greatest\n");
            }
            else
            {
                printf("The value of d is greatest\n");
            }
        }
    }
    else if (b > c)
    {
        if (b > d)
        {
            printf("The value of b is greatest\n");
        }
        else
        {
            printf("The value of d is greatest\n");
        }
    }
    else if (c > d)
    {
        printf("The value of c is greatest\n");
    }
    else
    {
        printf("The value of d is greatest\n");
    }
    return 0;
}