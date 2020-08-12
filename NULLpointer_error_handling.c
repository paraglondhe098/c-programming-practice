#include <stdio.h>
int main()
{
    int a=87;
    int *ptr=NULL;
    if(ptr!=NULL){
        printf("The value at ptr is %d",*ptr);
    }
    else{
        printf("The pointer is NULL");
    }
    
    return 0; 
}