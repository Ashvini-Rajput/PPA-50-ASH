#include<stdio.h>
#include<stdlib.h>   //for malloc ,calloc,realloc & free
int main()
{ 
    int Arr [5];   //static memory allocatin
    int Size  = 0;
    int *ptr = NULL;

    printf("enter number of element:\n");
    scanf("%d",&Size);

    ptr = (int*) calloc(Size ,sizeof(int));
    //ptr = (int*) calloc(12,500ml);
    
    //use the memory
    free(ptr);

    return 0;    
}