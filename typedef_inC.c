#include <stdio.h>
#include <string.h>
struct avenger
{   //structures are user defined data types
    char Name[20];
    float power;
    int id;
    char favourite_char;
}
;
int main()
{
    typedef struct avenger avg;
    avg Hulk;
    Hulk.power=98.99;
    Hulk.id=8;
    strcpy(Hulk.Name,"Hulk");
    typedef int integer; // Note that we can acess both int and integer
    integer a1=8;
    printf("%s is  very powerfull\n",Hulk.Name);
    typedef int* intptr; // Helpfull while making pointers.
    intptr a,b;
    a=&Hulk.id;
    b=&Hulk.id;
    return 0; 
}