#include <stdio.h>
#include <stdlib.h>
#include "array.h"
#define size 4

int* IncrementArray1();
typedef struct array{
    int arr[size];

}array;
array IncrementArray2();
int main()
{
     int * ptr=IncrementArray1(),i=0;
     for(i=0;i<size;i++){
     printf("%d\n",ptr[i]);
     }
     array arr2=IncrementArray2();
     for(i=0;i<size;i++){
     printf("%d\n",arr2.arr[i]);
     }
     ptr=IncrementArray3(size);
     for(i=0;i<size;i++){
     printf("%d\n",ptr[i]);
     }

     return 0;

}
array IncrementArray2(){

   array arr2={1,2,3,4};
   return arr2;


}
