#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int checkpal(char* str, int k) {
    int n=strlen(str), m=0, aa=0, catcher1=0,nop=0;
    char sample1[k+1], sample2[k+1], pallist[n-k];
    if (k<=10) {
        for (int i = 0; i < n-((2*k)-1); i++)
        {
            for (int j = 0, l=m; j < k; j++)
            {
                sample1[j]=str[l];
                sample1[k]='\0';
                sample2[j]=str[l+k];
                sample2[k]='\0';
                catcher1=l-(k-1);
                l++;
            }
            m++;
            char sample1_rev[k+1];
            int determiner=strcmp(sample1, strrev(sample2));
            if (determiner==0)
            {
                printf("Yes! this string contains a paliandromic sequence from %d to %d\n",catcher1,catcher1+((2*k)-1));               
            }
        }
    }
    else
    {
        printf("Please enter a number less than 10\n");
    }
    return 0;     
}
int main()
{
    char string[]="abcdefgh1234321xyzabccba";
    checkpal(string, 3);
    return 0;
}