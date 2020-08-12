#include <stdio.h>
int fadds(int a, int b){
    
    return a+b;
}
void gmuser(int(*ptr) (int,int),int a,int b){
    printf("Hello, good morning sir\n %d is your answer\n",ptr(a,b));
}
void gnuser(int(*ptr) (int,int)){
    printf("Hello, good night sir\n %d is your answer\n",ptr(2,3));
}
int main()
{    
    int (*fptr) (int,int);
    fptr=&fadds;
    gmuser(fadds,2,4);
    gnuser(fadds);
    return 0; 
}