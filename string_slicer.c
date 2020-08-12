void strslice(char* string, int x, int y) {
    /*This function takes string name as argument alongwith the positions x 
    and y (starting from zero) from where we want to slice the string*/
    int z =x;
    for (int i = 0; i < y+1; i++)
    {
        string[i]=string[z];
        z++;
    }
    string[(y-x)+1]='\0';
}
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[]= "Cut rest of all {except this} now.";
    puts(str1);
    strslice(str1, 17, 27);
    puts(str1);
    printf("%d", strlen(str1));
    return 0;
}