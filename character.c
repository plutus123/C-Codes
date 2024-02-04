#include <stdio.h>
int main(){
    char ch;
    printf("Enter the character\n");
    scanf("%c",&ch);
    if (ch>=97 && ch<=122){
        printf("The character is a lowercase");
    }
    else {
        printf("The character is not a lowercase");
    }
    return 0;
}