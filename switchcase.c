#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    switch (a)
    {
    case 3:
        printf("Value of a is 3");
        break;
    
    default:
        printf("Value of a is not 3");
        break;
    }
    return 0;
}
