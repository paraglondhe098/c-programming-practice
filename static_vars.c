#include <stdio.h>
int adds(int a) {
    static int myvar=0;
    myvar = myvar+a;
    return myvar;
}

int main()
{
    int i, b, num;
    printf("How many numbers do you want ot add?  =>");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        adds(0);
        scanf("%d\n", &b);
        adds(b);
        continue;
    }
    printf("%d\n", adds(0));
    //Actually if we input 6 numbers it adds only first 5 , please help me sir to solve this.
    return 0;
}
