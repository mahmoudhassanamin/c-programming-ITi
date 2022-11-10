#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1500 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds);
}
void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
int main()
{
    int size=0,i=0,x=0,y=0;
    printf("enter magice box size :");
    scanf("%d",&size);
    if(size%2 && size >1){
    x=1;
    y=(size+1)/2;
    system("cls");
    for(i=1;i<=(size*size);i++){
        delay(1);
        gotoxy(y*10,x*2);
        printf("%5d",i);
        if(i%size){
            x--;
            y--;
            if(x==0){
            x=size;
            }
            if(y==0){
            y=size;
            }
        }
        else{
           x++;
        }
    }
    }
    else {
        printf("enter odd number next time and more than one ");
    }

    return 0;

}

