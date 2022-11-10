#include <stdio.h>
#include <stdlib.h>
int cube ();
int main()
{
    printf("enter your number : ");
    printf("the cube of your number is : %d ",cube());
    return 0;
}
int cube (){
    int num =0;
    scanf("%d",&num);
    return num * num * num ;
}

