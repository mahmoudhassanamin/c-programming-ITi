#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade=0;
    printf("enter your grade : ");
    scanf("%d",&grade);
    if(grade >= 85 && grade <= 100)printf("Excellent");
    else if(grade >= 75 && grade < 85)printf("very good");
    else if(grade >= 65 && grade < 75 )printf("good");
    else if(grade >= 50 && grade < 65)printf("pass");
    else if(grade >= 0 && grade < 50) printf("fail");
    else printf("out of range");

return 0;
}
