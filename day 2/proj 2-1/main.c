#include<stdio.h>
int main()
{
    int T=0;
    printf("enter temperture : ");
    scanf("%d",&T);
    if(T>0)
    {
        printf("temperture is positive");

    }
    else if(T==0)
    {
        printf("temperture is zero");
    }
    else
    {
        printf("temperture is negativ");

    }
    return 0;
}
