// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// void change(char* str,char* output){
//     int determiner=0,i=0,j=0;
//     char str2[30];
//     char str3[30];
//     while (str[i]!='{')
//     {
//         str2[i]=str[i];
//         i++;
//     }   
//     str2[i]='\0';
//     printf("%d\n",i);
//     while (str[i]!='}')
//     {
//         i++;
//     }
//     i=i+2;
//     printf("%d\n",i);
//     while (str[i]!='~')
//     {
//         str3[j]=str[i];
//         i++;
//         j++;
//     }
//     str3[j]='\0';
//     i--;
//     printf("%d\n",i);
//     strcat(str2,"hard");
//     strcat(str2,str3);
//     strcpy(output,str2);   
// }
// int main() {
//     // int a=123456789,n=0,b;
//     // b=a;
//     // while (a!=0)
//     // {
//     //     a=a/10;
//     //     n++;
//     // }    
//     // int listnum[n];
//     // for (int i = 0; i<n; i++)
//     // {
//     //     // printf("%d\n",b-((b/10)*10));
//     //     listnum[i]=b-((b/10)*10);
//     //     b=b/10;
//     // }
//     // // printf("\n\n%d",n);  
//     // for (int i = 0; i < n; i++)
//     // {
//     //     printf("%d th element of list is %d\n",i,listnum[i]);
//     // }
//     // printf("%d\n",n);
//     // char str[15]="abcdefghijklmn";
//     // int n = strlen(str);
//     // for (int i = 0; i < n-4; i++)
//     // {
//     //     printf("%c",str[i]);
//     // }
//     // printf("Yes! this string contains a paliandromic sequence from %d to %d\n",catcher1,catcher1+((2*k)-1));
//     // printf("%d\n",strcmp("edcba","abcde"));
//     char changethis[30]= "This is {{Hard}} okay~";
//     char this[50];
//     change(changethis,this);
//     printf("%s",this);
// }


// C code to replace a substring in a string

#include<stdio.h>
#include<string.h>

void replaceSubstring(char[], char[], char[]);

int main()
{
    char string[100], sub[100], new_str[100];
    printf("\nEnter a string: ");
    gets(string);
    printf("\nEnter the substring: ");
    gets(sub);
    printf("\nEnter the new substring: ");
    gets(new_str);
    replaceSubstring(string, sub, new_str);
    printf("\nThe string after replacing : %s\n", string);
    return 0;
}

void replaceSubstring(char string[], char sub[], char new_str[])
{
    int stringLen, subLen, newLen;
    int i=0, j, k;
    int flag=0, start, end;
    stringLen=strlen(string);
    subLen=strlen(sub);
    newLen=strlen(new_str);

    for (i=0;i<stringLen;i++)
    {
        flag=0;
        start=i;
        for (j=0;string[i]==sub[j];j++, i++)
            if (j==subLen-1)
                flag=1;
        end=i;
        if (flag==0) {
            j=i-1;
        }
        else
        {
            for (j=start;j<end;j++)
            {
                for (k=start;k<stringLen;k++)
                    string[k]=string[k+1];
                stringLen--;
                i--;
            }

            for (j=start;j<start+newLen;j++)
            {
                for (k=stringLen;k>=j;k--)
                    string[k+1]=string[k];
                string[j]=new_str[j-start];
                stringLen++;
                i++;
            }
        }
    }
}
