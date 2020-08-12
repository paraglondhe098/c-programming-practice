//Actually this program creates problem when number is greater than 9 
#include <stdio.h>
#include <stdlib.h>

int isPalindrome(int num)
{   
    int n=0,b;
    b=num;
    //To count the total digits in the number.
    while (num!=0)
    {
        num=num/10;
        n++;
    }
    int listnum[n]; //Making list of digits of numbers
    //Adding elements to the list of number
    for (int i = 0; i<n; i++)
    {
        listnum[i]=b-((b/10)*10);//This simply adds the digits of the number to the list
        b=b/10;
    }
    //Now check wheather the numbers are same from back and forth or not
    int m=n-1,checker=0;
    for (int i = 0; i < n; i++)
    {
        if (listnum[i]==listnum[m])
        {
            checker++;
            m--;
        }
        else
        {
            m--;
        }                       
    }
    if (checker==n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int number;
    printf("Enter a number to check whether it is a palindrome or not \n");
    scanf("%d", &number);
    if (isPalindrome(number)){
        printf("This number is a palindrome\n");
    }
    else{
        printf("This number is not a palindrome\n");
    }

    return 0;
}
