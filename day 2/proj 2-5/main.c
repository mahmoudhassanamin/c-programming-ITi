#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1=0 , num2 =0 , result =0;
    char chooice =0;
    printf("choose operation  \n + \n - \n * \n / \n");
    chooice=getchar();
    if(chooice == '+' || chooice == '-' || chooice == '*' || chooice == '/' ){
        printf("ok \nenter your number 1 then number 2 \n");
        scanf("%d %d",&num1,&num2);
        switch (chooice){
            case '+':result=num1+num2;
            break;
            case '-':result=num1-num2;
            break;
            case '*':result=num1*num2;
            break;
            case '/':result=num1/num2;
            break;
        }
        printf("\nthe result = %d ",result);
    }
    else printf("please enter correct chooice");

    return 0;

}
