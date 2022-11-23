#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include "mystrcon.h"

int main()
{
    char str1[30]={0},str2[15]={0};
    printf("your first name is : ");
    scanf("%[^\n]s",str1);
    printf("your second name is : ");
    fflush(stdin);
    scanf("%[^\n]s",str2);
    concat(str1,str2,strlen(str1));
    system("cls");
    printf("your full name is : %s",str1);
    return 0;
}
