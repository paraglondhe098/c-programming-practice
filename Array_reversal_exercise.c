#include <stdio.h>
void func1(int arr[])
{
    int index[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        index[i] = arr[i];
    }
    for (i = 0; i < 5; i++)
    {
        arr[i] = index[4 - i];
    }
}
void func2(int *ptr)
{
    int index[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        index[i] = *(ptr + i);
    }
    for (i = 0; i < 5; i++)
    {
        *(ptr + i) = index[4 - i];
    }
}
int main()
{   int i;
    int array[] = {1, 2, 3, 46, 5};
    printf("\nBefore calling any function\n\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%dth element of array is %d\n", i, array[i]);
    }
    printf("\nAfter calling func1()\n\n");
    func1(array);
    for ( i = 0; i < 5; i++)
    {
        printf("%dth element of array is %d\n", i, array[i]);
    }
    printf("\nAfter calling func2()\n\n");
    func2(array);
    for ( i = 0; i < 5; i++)
    {
        printf("%dth element of array is %d\n", i, array[i]);
    }
    return 0;

    
}