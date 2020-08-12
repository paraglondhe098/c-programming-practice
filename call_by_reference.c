int Change(int*a){
    *a=7;
    return 0;
}
void swap(int*k,int*l){
    int a,b;
    a=*l;
    *l=*k;
    *k=a;
}
#include <stdio.h>
int main()
{
    int b=4;
    printf("The value of b is %d\n",b);
    Change(&b) ;
    printf("The value of b is now %d\n",b); //The value of global variable b is changed.   
    int m=5,n=4;
    printf("a=%d,b=%d\n",m,n) ;
    swap(&m,&n);  //To interchange the two values
    printf("a=%d,b=%d\n",m,n) ;
    return 0;
}