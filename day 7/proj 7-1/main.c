#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "texteditor.h"
#define size 50


 int y=20 ,x=20,i=0;
int main()
{
    char text[size]={'\0'},press=0;
    gotoxy(x,y);
    color (i,size);
    while(press !=13){

        gotoxy(x,y);
        press=getch();
        if(press==-32){
            press=getch();
            switch(press){
                case 75:
                case 77:
                    move(press,size);
                    break;
                case 71:
                    x=20;
                    i=0;
                    gotoxy(x,y);
                    break;

            }
        }

        else if(press == 8 && x>20){
            i--;
            x--;
            delet(&text[i]);
            system("cls");
            gotoxy(20,20);
            textattr(240);
            print(text);
            color (i,size);

        }
        else if(press!=8&& press !=13 && x<(size+20)){

            edit(&text[i],press);
            i++;
            x++;
            system("cls");
            gotoxy(20,20);
            textattr(240);
            print(text);
            color (i,size);

        }

    }

         gotoxy(20,30);
         print(text);


    return 0;
}


