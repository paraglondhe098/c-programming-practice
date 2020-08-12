#include <stdio.h>
//& used to get adress of the given variable
//* used to get value at the adress
int main()
{
int a=99;
int* ptr1=&a;
char abc = '2';
char* ab = & abc;
int* ptr2= NULL;
printf("The value of a is %d\n",a);
printf("The value of a is %d\n",*ptr1);
printf("The adress of abc is %x\n",ab);
printf("The value of abc is %c\n",*ab);
printf("The value of NULL pointer is %p",ptr2);
 
return 0; 
}
