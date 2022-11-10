#include <stdio.h>
#include <stdlib.h>

int main()
{
    char chara =0;
    int alpha =0 , word=0;
    printf("\t\t\twelcome\t\t\t\n\t\t\t===============================\n");
    printf("enter your sentance and press enter in the end of it \n");
    do{
        chara=getche();
        if((chara ==' '&& alpha >0 )|| (chara == 13 &&alpha >0)){
            word++;
        }
        else if ((chara >='a' && chara <='z') ||(chara>='A'&&chara<='Z') )
        {
            alpha++;
        }

    }while(chara!=13);
    printf("\ntotal of alpha : %d \ntotal of words : %d",alpha,word);

    return 0;
}
