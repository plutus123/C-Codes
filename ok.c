#include <stdio.h>
#include <string.h>
int main(){
    char s1[30];
    printf ("Enter the string\n");
    gets(s1);
    strlwr(s1);
    printf("%s",s1);
    return 0;
}