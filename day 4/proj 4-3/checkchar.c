#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void checkchar(){
    char press=0;

    do{

        system("cls");
        printf("enter char to check if it an normal key or extended key ");
        press=getche();
        if(press == -32){
            press=getche();
            system("cls");
            printf("it is extended key");
        }
        else{
            system("cls");
            printf("it is normal key");
        }
        printf("\nto check of another key press enter ");
        press=getch();
    }while(press==13);
}
