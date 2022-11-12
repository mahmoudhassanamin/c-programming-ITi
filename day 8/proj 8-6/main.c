#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "texteditor.h"



int y=20 ,x=20,i=0,j=0;
int main()
{
    char **text,press=0;
    int rows =0,cols=0;
    printf("set multi line editor \nenter how many lines of editing area : ");
    scanf("%d",&rows);
    text=(char **) malloc (rows * sizeof(char));
    printf("enter width of editing area : ");
    scanf("%d",&cols);
    for (i=0; i<rows ;i++){
        text[i]=(char *) malloc((cols+1)*sizeof(char)); // cols (+1) to add '\0' charecter
         for(j=0;j<cols;j++){
             text[i][j]=' ';
         }
         text[i][j]='\0';
    }

    i=0;
    j=0;

    while(press != 27){
        system("cls");
        print(text,rows);
        gotoxy((x+i),(y+j));
        press=getch();
        if(press==-32){
            press=getch();
            switch(press){
                case 75:
                case 77:
                case 72:
                case 80:
                    move(press,cols,rows);
                    break;
                case 71:
                    x=20;
                    i=0;
                    gotoxy(x,y+j);
                    break;

            }
        }

        else if(press == 8 && i>0){
            i--;
            backspace(text,cols,rows);
        }
        else if(press == 13 && j<rows){
                j++;
                i=0;
        }
        else if(j<rows && i<cols){
            edit(text[j]+i,press);
            i++;
            if(i==cols){
                i=0;
                j++;
            }

        }


    }

         for (i=0;i<rows;i++){
            gotoxy(x,y+rows+5+i);
            printf("%s",text[i]);

         }
         printf("\n\n\n");



    return 0;
}


