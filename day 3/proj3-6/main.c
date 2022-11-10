#include <stdio.h>
#include <stdlib.h>

int main()
{
    conv();
}
void conv(){
    printf("enter any lowercase to convert it to uppercase : ");
    char sym;
    sym=getche();
    if (sym>='a' && sym<='z' ){
        printf("\nyour char in uppercase : %c",(sym-32));
    }
    else{
        printf("\nit is not loweralphabet");
    }
}
