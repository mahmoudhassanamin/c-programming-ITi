#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;
    printf("enter number 1: ");
    scanf("%d",&num1);
    printf("enter number 2: ");
    scanf("%d",&num2);
    printf("sum = %d",num1+num2);
    printf("\nsub = %d",num1-num2);
    printf("\nmul = %d",num1*num2);
    printf("\ndiv = %f",(float)num1/num2);
    return 0;

}
