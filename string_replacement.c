#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* strslice(char* string, int x, int y) {
    /*This function takes string name as argument alongwith the positions x
    and y (starting from zero) from where we want to slice the string*/
    int z =x;
    for (int i = 0; i < y+1; i++)
    {
        string[i]=string[z];
        z++;
    }
    string[(y-x)+1]='\0';
    return string;
}

void strreplace(char* string, char* sub, char* subnew) {
    int len0=strlen(string), sublen=strlen(sub), newlen=(len0-sublen)+strlen(subnew), flag=0;
    if (strstr(string, sub))
    {
        char part1[len0], part2[len0], str1[len0];
        strcpy(str1, strstr(string, sub));
        int k =strlen(str1), m =len0-k, n=k-sublen;
        strcpy(part1, strslice(string, 0, m-1));
        strcpy(part2, strslice(str1, sublen, k-1));
        strcat(part1, subnew);
        strcat(part1, part2);
        string[newlen];//Doubtfull
        strcpy(string, part1);
        strreplace(string, sub, subnew);
    }
}


int main()
{
    char string1[]="Hello, his name is {name}. {name} is very strong. {name} has ability to run.{name} runs faster than light.";
    strreplace(string1, "{name}", "Goku");
    puts(string1);
    return 0;
}