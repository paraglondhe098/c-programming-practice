#include <stdio.h>
#include <string.h>
void parser(char *str)
{
    int determiner = 2;
    int index=0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i]=='<'){
            determiner=1;
            continue;
        }
        else if (str[i]=='>')
        {
            determiner=0;
            continue;
        }
        if (determiner==0){
            str[index]=str[i];
            index++;
        }
    }
    str[index]='\0' ;   
}
void whitespace_rem(char arr[]){
    int i=0,j,k=0,whitespace_before,whitespace_after;
    j= strlen(arr)-1;
    while (arr[i]==' ')
    {
        i++;
    }
    whitespace_before=i;
    while (arr[j]==' ')
    {
        j--;
    }
    whitespace_after=j;
    for (k; k < j+1; k++)
    {
        arr[k]=arr[i];
        i++;
    }
    arr[whitespace_after-whitespace_before+1]='\0' ; 
}

int main()
{   
    char str1[]="<h1>   This is a string   </h1><h1>   This is a string   </h1>";
    parser(str1);
    whitespace_rem(str1);
    printf("The string is ~~%s~~\n",str1);    
    printf("strlen=%d\n",strlen(str1));    
    return 0; 
}