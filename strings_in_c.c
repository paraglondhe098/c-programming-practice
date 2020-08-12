//Strings are nothing but array of characters terminated by null character ie /0
#include <stdio.h>
#include <string.h>
void printstr(char str[]){
    int i =0;
    while (str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }   
}
int main()
{
    char str[]="Hello world";// is equal to {'H','e','l','l','o',' ','w','o','r','l','d','/0'}
    puts(str);
    printstr(str);   
    return 0; 
}