#include <stdio.h>
#include <string.h>
/*
string.h includes following functions :-
strcat()      -  to concatenate / join two strings
strlen()      -  to find len
strrev()      -  to get reverse of  a str
strcpy()      -  to copy x-str into y-str
strcmp()      -  to compare str-x and str-y
*/
int main()
{
    printf("\nlet's see all one by one.\n\n");
    char str1 []="Hello ";    
    char str2 []="World";
    //1)Strcat 2)strlen 3)strrev :-
    printf("%s\n",strcat(str1,str2));
    printf("%d\n",strlen(str1));
    printf("%s\n",strrev(str1));
    //4)strcpy 
    char str3 [20];
    strcpy(str3,strcat(str1,str2));
    puts(str3);
    //5)strcmp
    printf("%d\n",strcmp(str2,str1));
    printf("%d",strcmp("Hello","Hello"));
    return 0; 
}