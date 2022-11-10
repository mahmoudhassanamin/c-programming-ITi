#include <stdio.h>
#include <stdlib.h>
#include"emp_menu.h"
#define max 10


int main()
{
    int size=0,i=0;
    char press =0,line=1,flag =0;
    printf("how many employee ?");
    scanf("%d",&size);
    emp * ptr [max];//ptr-->ptr[i]-->struct
    for(i=0;i<size;i++){
        ptr[i]=(emp *) malloc(sizeof(emp));
    }
    while (flag!=2){

        menu(line);
        press=getch();

        if(press==-32){
           press=getch();
           switch(press){
            case 72:
                line--;
                if(line==0){
                    line=3;
                }
                break ;
            case 80:
                line++;
                if(line==4){
                    line=1;
                }
           }
        }
        else if (press==13){
            switch (line){
                case 1:
                    if(flag==0){
                   emplyee(ptr,size);
                   flag=1;
                    }
                    break ;
                case 2:
                   diplay(ptr,size);
                   break;
                case 3:
                    flag=2;
                    break;

            }

        }

    }
    return 0;
}
//    emplyee(ptr,size);
