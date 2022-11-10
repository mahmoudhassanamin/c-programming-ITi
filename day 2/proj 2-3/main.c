#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 =0 ,num2=0,num3=0;
    printf("enter number 1 : ");
    scanf("%d",&num1);
    int larg=num1;
    printf("enter number 2 : ");
    scanf("%d",&num2);
    printf("enter number 3 : ");
    scanf("%d",&num3);
    if(num2>larg){
            larg=num2;
    }
    if(num3>larg){
        larg=num3;
    }

    printf("the largest number is : %d",larg);
    return 0;

}
