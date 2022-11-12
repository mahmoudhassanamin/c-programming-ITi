#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
extern int i,j;
void textattr(int ForgC)
{
    //system("COLOR ForgC"); //system("COLOR FC");
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut,ForgC);
}
void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void move(char event,int cols ,int rows){
    if(event== 75){
        if(i>0 && j>=0){
            i--;
        }

        else if (i==0&& j!=0) {
            i=cols-1;
            j--;
        }
    }
    else if(event== 77 && j<rows){
        if(i<cols-1){
            i++;
        }
        else if (i==cols-1 && j<rows){
            i=0;
            j++;
        }
    }
    else if (event==72 && j>0){
        j--;
    }
    else if (event==80 && j<rows){
        j++;
    }

}
void edit (char *text,char event){
     *text=event;
}
void backspace(char **text,int cols ,int rows){
    char temp=' ';
    int k=i,m=j;

    while( m != rows && k != cols-1 ){
        if(text[m][k+1]== '\0'){
            temp=' ';
            text[m][k]=text[m+1][0];
            text[m+1][0]=temp;
            k=0;
            m++;

        }
        else{
            temp=' ';
            text[m][k]=text[m][k+1];
            text[m][k+1]=temp;
            k++;
        }

    }


}


void print (char **text,int rows){
    int k=0;
    for (k=0;k<rows;k++){
        gotoxy(20,(20+k));
        textattr(240);
        printf("%s",text[k]);
        textattr(15);
    }
}


