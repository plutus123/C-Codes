#include <stdio.h>
int main()
{
    int marks;
    printf("Enter the number\n");
    scanf("%d", &marks);
    switch (marks / 10)
    {
    case 10:
    case 9:
        printf("The grade is A\n");
        break;
    case 8:
        printf("The grade is B\n");
        break;
    case 7:
        printf("The grade is C\n");
        break;
    case 6:
        printf("The grade is D\n");
        break;
    case 5:
        printf("The grade is E\n");
        break;
    default:
        printf("The grade is F\n");
    }
}
