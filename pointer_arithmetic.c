#include <stdio.h>
int main()
{
    int a=9;
    int* ptr =&a;
    char b='9';
    char* ptr2 = &b;
    printf("Adress of a is %d \n",ptr) ;
    printf("ptr+1 in pointer arithmetic is %d\n",ptr+1) ; //ie ptr + sizeof(int)
    printf("Adress of b is %d \n",ptr2);
    printf("Ptr2+ 1 is %d",ptr2+1);
    return 0;     
}
