#include <stdio.h>
#include <stdlib.h>

int main()
{
   char arr[]="mahmoud hassan",copy[20]={'\0'},i=0;
   while(arr[i]!='\0'){
    copy[i]=arr[i];
    i++;
   }
   printf("copy is : %s",copy);
   return 0;
}
