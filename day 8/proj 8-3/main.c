#include <stdio.h>
#include <stdlib.h>
int sum (int degree);
int main()
{
   int rows=0,cols=0, ** ptr,i=0,j=0,flag=1,c=0;
   float result=0;
   char press=0;
   printf("enter number of students");
   scanf("%d",&rows);
   ptr=(int **) malloc (rows*sizeof(int));
   printf("enter number of subjects");
   scanf("%d",&cols);
   cols++; // to add student's number column
   for (i=0;i<cols;i++){
        ptr[i]=(int *) malloc (sizeof(int));
   }
   system("cls");
   for(i=0;i<rows;i++){
        printf("enter student %d number",i+1);
        scanf("%d",ptr[i]+0);
        for(j=1;j<cols;j++){
            printf("enter degree of subject %d : ",j);
            scanf("%d",ptr[i]+j);
        }
   }



   while(press!= 27){
           i=0;
           result=0;
           system("cls");
           printf("if want to \n1-calculate degree summition for student press S\n2-calculate average of degree for a subject press G");
           press =getch();
           switch(press){
           case 115:
           case 83:
               system("cls");
               printf("\nenter student number :");
               scanf("%d",&c);
               flag=1;
                while(flag!=0){
                    if(ptr[i][0]== c || i==rows){
                        flag=0;
                    }
                    else{
                        i++;
                    }
                }
                if(i==rows){
                    break; //enter number out of range
                }
                else {
                    for(j=1;j<cols;j++){
                        result+=ptr[i][j];

                    }
                     printf("the summition of degrees of student %d = %.2f ",c,result);
                     printf("\n-if you want to calculate to another subject press any key \n-to finish press esc");
                     press=getch();
                }

                break;
         case 71:
         case 103:
               system("cls");
               printf("enter subject number :");
               scanf("%d",&c);
               if(c>=1&&c<=cols){
                    result=0;
                    for(j=0;j<rows;j++){
                           result+=ptr[j][c];
                        }
                        result /=rows;
                        printf("the Average of subject %d = %.2f ",c,result);
                        printf("\n-if you want to calculate to another subject press any key \n-to finish press esc");
                        press=getch();
                    break;
                }
            default :
                printf("out of range");
                printf("\n-if you want to calculate to another subject press any key \n-to finish press esc");
                press=getch();
                break;
           }
   }

}


