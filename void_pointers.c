#include <stdio.h>
#include <string.h>
int main()
{
    int a=2;
    float b=3.99;
    void*ptr;
    ptr=&b;
    // printf("a=%d",*ptr;  //The statement is not true and gives an error because ptr is a void pointer.
    printf("b=%f", *((float*)ptr)); // ptr should typecasted to its type before dereferencing
    return 0;
}