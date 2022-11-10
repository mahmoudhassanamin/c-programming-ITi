#include <stdio.h>
#include <stdlib.h>

int main()
{
   check ();
   return 0;
}
void check ()
{
  char sym;
    printf("enter any charecter : ");
    sym=getche();
    if (sym>='a' && sym<= 'z' ||sym>='A' && sym<='Z' ){
        printf("\nok it is alphabet");
    }
    else{
        printf("\nit is not alphabet");
    }
}
