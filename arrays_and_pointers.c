#include <stdio.h>
int main()
{
    int i;
    int arr1[] = {1, 2, 3, 4};
    for (i = 0; i < 4; i++)
    { 
        printf("Pointer of %d'th element of arr1 is %d\n", i, arr1 + i); //arr is nothing but &arr[0]
    }
    printf("\n");
    for ( i = 0; i < 4; i++)
    {
        printf("Value of %d'th element of arr1 is %d\n", i, *(arr1 + i));//*(arr+i)=arr[i]
    }
    

    return 0;
}