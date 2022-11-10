int* IncrementArray1(){

   static int arr1[]={1,2,3,4};
   return arr1;


}


int * IncrementArray3(int size){
    int i=0;
    int *ptr=(int *) malloc(4*sizeof(int));
    for(i=0;i<size;i++){
        ptr[i]=i+1;
     }

    return ptr;


}

