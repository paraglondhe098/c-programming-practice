int fac(a){
    /*
    Factorial is a function can solved with ease with recursions as follows.
    */
    if (a==0){
        return 1;
    }
    if (a==1)
    {
        return 1;
    }
    else
    {
        return a*fac(a-1);
    }   
}

int fab(a){
    /*
    Fabonacci sequence = 0,1,1,2,3,5,8,13,21,.........
    */
    if (a==0)
    {
        return 0;
    }
    if (a==1 || a==2)
    {
        return 1;
    }
    else
    {
        return fab(a-1)+fab(a-2);
    }    
}
#include <stdio.h>
int main(){
    printf("Fabonacci of 8 is %d \n",fab(8));
    printf("Factorial of 4 is %d ",fac(4));
}
