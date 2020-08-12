#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int checkpal(char* str){
    int n=strlen(str),m=0;
    for (int i = 0; i < n-4; i++)
    {
        if ((str[i]==str[i+4]) && (str[i+1]==str[i+3]))
        {
            printf("\nPaliandrome exists from %dth element to %dth element\n",i,i+4);
            printf("Which is %c%c%c%c%c\n\n",str[i],str[i+1],str[i+2],str[i+3],str[i+4]);
            m++;
        }  
    }
    if (m>0)
    {
        printf("%d paliandromes found",m);
        return m;
    }
    else
    {
        printf("No paliandrome found");
        return 0;
    }     
}

int main()
{
    char string[20]="abcdefgxyzyxijklm";
    checkpal(string);        
    return 0; 
}