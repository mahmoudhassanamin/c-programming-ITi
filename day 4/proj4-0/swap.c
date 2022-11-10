#include<stdio.h>
void swap1(){
    int num1=0,num2=0,temp=0;
    printf("enter two number to swap them\n");
    printf("enter number 1 : ");
    scanf("%d",&num1);
    printf("enter number 2 : ");
    scanf("%d",&num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("number 1 : %d\nnumber 2 : %d",num1,num2);
}
void swap2(int *ptr1,int *ptr2){
    printf("enter two number to swap them\n");
    printf("enter number 1 : ");
    scanf("%d",ptr1);
    printf("enter number 2 : ");
    scanf("%d",ptr2);
    int temp =0;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
