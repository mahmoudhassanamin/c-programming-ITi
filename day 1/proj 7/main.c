#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1 ,num2;
    printf("enter number 1 : ");
    scanf("%f",&num1);
    printf("enter number 2 : ");
    scanf("%f",&num2);
    printf("divid = %f",num1/num2);
    printf("\nmoduls = %d",(int)num1%(int)num2);
    return 0;
}
