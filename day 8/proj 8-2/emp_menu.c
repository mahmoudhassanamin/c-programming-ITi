#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
typedef struct emp{
    int id;
    int age;
    char name[10];
}emp;
char menuu[3][17]={"enter employees","diplay employees","finish"};
void SetColor(int ForgC){
     WORD wColor;

      HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
      CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
                 //Mask out all but the background attribute, and add in the forgournd     color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);}
}
void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void emplyee(emp * ptr [] ,int size){
    system("cls");
    int i=0;
    for(i=0;i<size;i++){
        printf("enter ID employee %d :",i+1);
        scanf("%d",&ptr[i]->id);
        printf("enter age employee %d :",i+1);
        scanf("%d",&ptr[i]->age);
        printf("enter name employee %d :",i+1);
        scanf("%s", ptr[i]->name);
    }
    getch();

}
void diplay (emp *ptr [],int size){
    system("cls");
    int i=0;
    for(i=0;i<size;i++){
        printf("ID employee %d : %d\n",i+1,ptr[i]->id);

        printf("age employee %d : %d\n",i+1,ptr[i]->age);

        printf("name employee %d: %s\n",i+1,ptr[i]->name);
    }
    getch();


}
void menu(int line){
    system("cls");
    char i=0;
    for(i=0;i<3;i++){
       if(line==i+1){
        SetColor(1);
        printf("%s\n",menuu[i]);
        SetColor(15);
       }

       else{
        printf("%s\n",menuu[i]);
       }
    }

}
