#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "texteditor.h"



int y=20 ,x=20,i=0,j=0;
int main()
{
    char **text,press=0;
    short int rows =0,cols=0;
    printf("set multi line editor \nenter how many lines of editing area : ");
    scanf("%d",&rows);
    text=(char **) malloc (rows * sizeof(char));
    printf("enter width of editing area : ");
    scanf("%d",&cols);
    for (i=0; i<rows ;i++){
        *text=(char *) malloc((cols+1)*sizeof(char)); // cols (+1) to add '\0' charecter
         for(j=0;j<cols;j++){
             text[i][j]=' ';
         }
         text[i][cols]='\0';
    }

    system("cls"); // print el lines kolha
    textattr(240);
    print(text,rows);
    textattr(15);
    i=0;
    j=0;

    while(press != 27){
        if(i>=length || i>=length*(width-1) || i>=length*(width-1) || i>=length*(width) ){

        }
        gotoxy(x,y);
        press=getch();
        if(press==-32){
            press=getch();
            switch(press){
                case 75:
                case 77:
                case 72:
                case 80:
                    move(press,length);
                    break;
                case 83:
                    delet(text[j]+i+1);
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
        else if(press ==13 ){

        }

    }

         gotoxy(20,30);
         printf("%s\n\n",text);



    return 0;
}


