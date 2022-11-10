#include <stdio.h>
#include <stdlib.h>

int main()
{
    // output include spaces (if need ignore spaces write && str[i]!=' ')
    char str[]="mahmoud hassan" ,count =0,i=0;
    while(str[i]!='\0'){
        count++;
        i++;
    }
    printf("length = %d",count);
    return 0;

}
