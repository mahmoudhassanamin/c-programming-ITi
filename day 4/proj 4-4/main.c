#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include "mystrcon.h"

int main()
{
    char str1[30]={0},str2[15]={0},i=0,j=0,press=0;
    while(i<2){
        printf("\nenter name %d\n",i+1);
        j=0;
        do{

            press=getche();
            if(i==0&&press!=13){
               str1[j]= press;
               j++;
            }
            else if(i==1&&press!=13){
               str2[j]= press;
               j++;
            }

        }while( press !=13);
        i++;
    }
    strcon(str1,str2);
    system("cls");
    printf("your full name is : %s",str1);
    return 0;
}
