#include <stdio.h>
int main()
{
    
    float tax=0;
    float income;
    printf("Enter your income\n");
    scanf("%f",&income);
    if (income >= 250000 && income <= 500000)
    {
        tax = tax + 0.05 * (income-250000);
        printf("The income tax is %f",tax);
    }
    else if (income > 500000 && income <= 1000000)
    {
        tax = tax + 0.2 * (income-500000);
        printf("The income tax is %f",tax);
    }
    else if (income > 1000000)
    {
        tax = tax + 0.3 * (income-1000000);
        printf("The income tax is %f",tax);
    }
    else {
        printf ("There is no tax");
    }
    return 0;
}
