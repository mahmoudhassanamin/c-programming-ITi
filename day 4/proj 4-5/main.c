#include <stdio.h>
#include <stdlib.h>
#include "freqfun.h"

int main()
{
    char s[100]={'\0'},ch[127]={0};
    scanf("%[^\n]s",s);
    f(s,ch);
    system("cls");
    printf("char\tnumber");
    for(int i=0;i<127;i++){
        if(ch[i] != 0)
        {
            printf("\n %c \t  %d",i,ch[i]);
        }
    }
    return 0;

}
