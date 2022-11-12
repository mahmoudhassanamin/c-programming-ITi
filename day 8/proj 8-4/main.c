#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "texteditor.h"



 int y=20 ,x=20,i=0;
int main()
{
    char *text,press=0;
    short int length=0;
    printf("enter length of editing area : ");
    scanf("%d",&length);
    text=(char *) malloc((length+1)*sizeof(char)); // (length+1) to add '\0' charecter


    for(i=0;i<length;i++){
        text[i]=' ';
    }
    text[length]='\0';
    i=0;
    system("cls");
    gotoxy(x,y);
    textattr(240);
    printf("%s ",text);
    textattr(15);
    while(press !=13){
        gotoxy(x,y);
        press=getch();
        if(press==-32){
            press=getch();
            switch(press){
                case 75:
                case 77:
                    move(press,length);
                    break;
                case 83:
                    delet(text+i+1);
                    system("cls");
                    gotoxy(20,20);
                    textattr(240);
                    printf("%s ",text);
                    textattr(15);
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
            backspace(text+i);
            system("cls");
            gotoxy(20,20);
            textattr(240);
            printf("%s ",text);
            textattr(15);

        }
        else if(press!=8&& press !=13 && i<length){
            edit(text+i,press);
            i++;
            x++;
            system("cls");
            gotoxy(20,20);
            textattr(240);
            printf("%s ",text);
            textattr(15);
        }

    }

         gotoxy(20,30);
         printf("%s\n\n",text);



    return 0;
}


