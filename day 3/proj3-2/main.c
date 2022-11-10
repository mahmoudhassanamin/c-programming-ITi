#include <stdio.h>
#include <windows.h>


int main()
{
    char choice ,x;
    do{
        system("cls");
        printf("\t\t\twelcome\t\t\t\n\t\t===========================");
        printf("\nplease choose a event \n========================\n");
        printf("a - print what is iti ?\nb - print what is nti ?\nc - finish\n");
        choice=getche();

        switch(choice){
            case 'a':

                 system("cls");
                 printf("ITI :Information Technology Institute\n");

                 choice=getch();
                 break;
            case 'b':
               system("cls");
                printf("NTI :National Telecommunication Institute\n");
                choice=getch();
                break;
            case 'c':
                system("cls");
                printf("Good Bye\n");
                x=1;
                break;
            default :
                x=1;
        }


    }while(x==0);

    return 0;
}
