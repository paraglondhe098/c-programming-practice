#include <stdio.h>
int func1(int d, int b,int c){
    int sum =d+b+c;
    return sum;
}
int main()
{
    int (*ptr) (int,int,int);
    ptr=&func1;
    int d=(*ptr)(2,3,4);
    printf("%d",d);
    return 0; 
}