#include <stdio.h>
#include <string.h>

void strslice(char* string,char* string2, int x, int y) {
    /*This function takes string name as argument alongwith the positions x 
    and y (starting from zero) from where we want to slice the string*/
    int z =x;
    for (int i = 0; i < y+1; i++)
    {
        string2[i]=string[z];
        z++;
    }
    string2[(y-x)+1]='\0';
}
char* changer(char* string, char* replace, char *word) {
    int oldstrlen = strlen(string),j=0, k=0;
    int c1=0, c2=0,checksame=1;
    char oldstr[oldstrlen];
    for (int i = 0; i < oldstrlen; i++)
    {
        if (string[i]=='{' && string[i+1]=='{')//To tell program to start checker
        {
            j=i+2;
            c1=j;
            while (string[j]!='}') {
                j++;
            }
            c2=j-1;
            char string2[(c2-c1)+1];
            strslice(string, string2, c1, c2);
            checksame=strcmp(replace,string2);
            if (!checksame) //now replace the word
            {
                char part1[c1];
                char part3[oldstrlen-c2];
                strslice(string,part3,c2+3,oldstrlen);
                strslice(string,part1,0,c1-3);
                strcat(part1,word);
                strcpy(string,strcat(part1,part3));
                // break;           
            }          
        }
    }
    return "hello";
}

int main()
{
    FILE* tmp;
    int m=0;
    char a='a';
    tmp = fopen("template.txt", "r");
    while (a!='~')
    {
        a=fgetc(tmp);
        m++;
    }
    fclose(tmp);
    printf("%d\n", m);
    char string[m];
    FILE* tmp2;
    tmp2 = fopen("template.txt", "r");
    fgets(string, m, tmp2);
    fclose(tmp2);
    changer(string, "name", "rohan");
    changer(string, "outlet", "xydsdsdz");
    changer(string, "item", "Poct");
    printf("%s",string);
    return 0;
}