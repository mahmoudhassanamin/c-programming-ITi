#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int max_num();
int main(){
    printf("the greatest number = %d",max_num());
    return 0;
}

int max_num(){

    printf("please enter number greater than zero\n");
    int num1=0 ,max=0;
    printf("enter three number to get the largest number \n");
    printf("number 1 :");
    scanf("%d",&num1);
    max=num1;
    for(int i=1;i<=2;i++){
        printf("number %d :",i+1);
        scanf("%d",&num1);
    if(max<num1){
                max=num1;
            }
    }
    return max;
}
