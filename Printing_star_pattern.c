#include <stdio.h>
void printstar1(int a)
{
    int i, j;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void printstar2(int a)
{
    int i, j;
    for (i = a; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int a, b;
label1:
    printf("How many rows do you want to print ?");
    scanf("%d", &a);
    printf("Enter 1 to print straight and enter 0 to print upside down.");
    scanf("%d", &b);
    switch (b)
    {
    case 1:
        printstar1(a);
        goto label1;
        break;

    case 0:
        printstar2(a);
        goto label1;
        break;
    default:
        printf("Wrong input !\n");
        goto label1;
        break;
    }

    return 0;
}