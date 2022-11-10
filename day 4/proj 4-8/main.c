#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    char arr[300]={'\0'} ,i=0,j=0,flag=0 , press=0;
    while(press != 13){
        press=getche();
        arr[i]=press;
        i++;
    }
    i=0;
    while(arr [i] != '\0'){

        if((arr [i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A'&& arr[i] <= 'Z') ){
          i++;
        }
        else{
            j=i;
              while(arr[j]!='\0'){
                arr[j]=arr[j+1];
                j++;
              }

        }

    }

    printf("\ncorrect string : %s ",arr);
    return 0;
}
