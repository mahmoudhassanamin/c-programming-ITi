#include <stdio.h>
#include <stdlib.h>
#include "swap.h"
int main()
{
    int x=0,y=0;
    swap2(&x,&y);
    printf("number 1 : %d\nnumber 2 : %d",x,y);
    return 0;
}
