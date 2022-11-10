#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num =0, sum=0;
    while(sum<=100){
        printf("enter new number");
        scanf("%d",&num);
        sum+=num;
    }
    return 0;
}
