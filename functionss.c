int add(int a, int b)
{
    int z;
    z = a + b;
    return z;
}
int subtract(int a, int b)
{
    int z;
    z = a - b;
    return z;
}
int multiply(int a, int b)
{
    int z;
    z = a * b;
    return z;
}
int divide(int a, int b)
{
    int z;
    z = a / b;
    return z;
}
#include <stdio.h>
int main()
{
    int sum, sub, mult, div;
    sum = add(3, 2);
    sub = subtract(3, 2);
    mult = multiply(3, 2);
    div = divide(3, 2);
    printf("%d\n", sum);
    printf("%d\n", sub);
    printf("%d\n", mult);
    printf("%d\n", div);
}