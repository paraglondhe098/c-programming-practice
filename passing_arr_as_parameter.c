#include <stdio.h>

int func1(int arr[]){
    for (int i = 0; i < 4; i++)
    {
        printf("Value of %dth element is %d\n",i,arr[i]);
    } 
    return 0;
}
void func2(int *ptr){
    for (int i = 0; i < 4; i++)
    {
        *(ptr+i)=*(ptr+i)*12;
    }
    
}
int main()
{
    int arr[4]={1,2,3,4} ;
    func2(arr);
    func1(arr);    
    return 0; 
}