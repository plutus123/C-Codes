#include <stdio.h>
int main(){
    int physics , chemistry , maths;
    float total;
    printf("Enter the marks of physics\n");
    scanf("%d",&physics);
    printf ("Enter the marks of chemistry\n");
    scanf("%d",&chemistry);
    printf ("Enter the marks of maths\n");
    scanf("%d",&maths);
    total = (physics+chemistry+maths)/3;
    if ((total<40)||physics<33||chemistry<33||maths<33){
        printf("%f is fail\n",total);
    }
    else {
        printf("%f is pass\n",total);
    }
    return 0;
}