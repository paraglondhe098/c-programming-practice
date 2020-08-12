#include <stdio.h>
// #include <string.h>
#include <stdlib.h> //contains calloc,malloc,realloc.
//Dynamic memory allocation is the way to allocate specific size of
//heap memory at runtime and thereafter free or modify it.
int main()
{
    //1)Use of Malloc
    // int* ptr1;   //Declaration of pointer (aka initialization)
    // ptr1 = (int*)malloc(4*sizeof(int)); //This will make an integer array of size 4 dynamically
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Enter the %d'th element of array\n",i+1);
    //     scanf("%d",&ptr1[i]);
    // }
    // for (int i = 0; i < 4; i++)
    // {
    //     printf(" %d th elememnt of array is %d\n",i+1,ptr1[i]);
    // }

    // //2)Use of Calloc
    //     int* ptr1;   //Declaration of pointer (aka initialization)
    // ptr1 = (int*)calloc(4,sizeof(int)); //This will make an integer array of size 4 dynamically
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Enter the %d'th element of array\n",i+1);
    //     scanf("%d",&ptr1[i]);
    // }
    // for (int i = 0; i < 4; i++)//note that allocated memory is initialised with zero
    // {
    //     printf(" %d th elememnt of array is %d\n",i+1,ptr1[i]);
    // }

    //3)Use of Realloc
    // int* ptr1;   //Declaration of pointer (aka initialization)
    // ptr1 = (int*)malloc(4*sizeof(int)); //This will make an integer array of size 4 dynamically
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Enter the %d'th element of array\n",i+1);
    //     scanf("%d",&ptr1[i]);
    // }
    // ptr1 = (int*)realloc(ptr1,6*sizeof(int)); //At this point the size of the array is increased at runtime from 4 to 6
    // for (int i = 0; i < 2; i++)
    // {
    //     printf("Enter the %d'th element of array\n",i+5);
    //     scanf("%d",&ptr1[i+4]);
    // }
    // for (int i = 0; i < 6; i++)
    // {
    //     printf(" %d th elememnt of array is %d\n",i+1,ptr1[i]);
    // }

    //2)Use of Free()
    int* ptr1;   //Declaration of pointer (aka initialization)
    ptr1 = (int*)calloc(4,sizeof(int)); //This will make an integer array of size 4 dynamically
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the %d'th element of array\n",i+1);
        scanf("%d",&ptr1[i]);
    }
    for (int i = 0; i < 4; i++)//note that allocated memory is initialised with zero
    {
        printf(" %d th elememnt of array is %d\n",i+1,ptr1[i]);
    }
    free(ptr1); //This will free the memory of existing ptr1 & create new ptr1 memory at runtime.
    ptr1 = (int*)calloc(5,sizeof(int)); //This will write same integer array with new size 5 dynamically
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d'th element of array\n",i+1);
        scanf("%d",&ptr1[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf(" %d th elememnt of array is %d\n",i+1,ptr1[i]);
    }
    return 0;
}
