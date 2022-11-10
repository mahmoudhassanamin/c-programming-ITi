#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<windows.h>
// MAHMOUD HASSAN
int main()
{   char arr[100]={'\0'},freq_char[2][28]={0},i=0,j=0,k=0;


    printf("enter your string\n");
    do{

       arr[i]=getche();
       if(arr[i]==13){
        arr[i]='\0';
       }
       i++;
    }while(arr[i-1]!='\0');
   int len=strlen(arr);
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<=len;j++){
            if(arr[i]==arr[j] && arr[i]!='\0'){
                if(freq_char[0][k]==0){
                    freq_char[0][k]=arr[i];

                }
                arr[j]='\0';
                freq_char[1][k]+=1;

            }

        }
        if(freq_char[1][k] == 0 && arr[i]!='\0'){
            freq_char[0][k]=arr[i];

        }
        if(arr[i]!='\0'){
            k++;
        }



    }
    system("cls");
    printf("char\t\tnum\n");
    for(i=0;i<strlen(freq_char[0]);i++){
        printf("%c\t\t%d\n",freq_char[0][i],freq_char[1][i]+1);
    }

    return 0;
}
