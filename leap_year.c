#include <stdio.h>
int main(){
    int year;
    printf("Enter the year\n");
    scanf("%d",&year);
    if (year%4==0 &&year%100!=0){
        printf("The year is leap year\n");
    }
    else if (year%400==0){
         printf("The year is leap year\n");
    
    }
    else {
        printf("Year is not leap year");
    }
    return 0;
}