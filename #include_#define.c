#include <stdio.h>
#include "main.c"
#define PI 3.14
#define SQUARE(r) r*r
int main()
{
    printf("The value of func1 from main.c is %d\n",func1());
    float radius = func1();
    printf("Area of circle with r=22 is %f\n",(PI*SQUARE(radius)));    
    printf("Square of 2 is %d",(SQUARE(2)));    
    return 0; 
}