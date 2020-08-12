#include <stdio.h>
#include <string.h>
int checkpal(char* str, int k) {//Here 'k' is the length of paliandrome you wants
    int n=strlen(str), m=0, catcher=0, total_paliandromes=0;
    char sample[k+1],sample_rev[k+1];
    if (k<=n) {
        for (int i = 0; i < n-(k-1); i++)
        {
            for (int j = 0, l=m; j < k; j++)
            {
                sample[j]=str[l];
                sample[k]='\0';
                catcher=l-(k-1);
                l++;
            }
            m++;
            strcpy(sample_rev,strrev(sample));
            strcpy(sample_rev,strrev(sample_rev));
            int determiner=strcmp(sample, sample_rev);
            if (determiner==0)
            {
                total_paliandromes++; 
                printf("\n%d)This string contains a paliandromic sequence of length %d from %d to %d, ",total_paliandromes,k,catcher,catcher+(k-1));
                printf("Which is ~~%s~~",sample);                                            
            }
        }
        printf("\n\nTotal paliandromic sequences of length %d in the string are %d\n",k,total_paliandromes);
        return total_paliandromes;
    }
    else
    {
        printf("Please enter a number less than length of the string\n");
        return 0;     
    }
}
int main()
{
    char string[]="abcdefghi12321xyzabcmananacc";
    checkpal(string, 3);//The function takes string and expected paliandrome length as input
    // for (int i = 2; i < strlen(string)+11; i++) //This for loop is for checking paliandrome of any length but give smallest value as at least 2
    // {
    //     checkpal(string,i);
    //     printf("\n");
    // }
    
    return 0;
}