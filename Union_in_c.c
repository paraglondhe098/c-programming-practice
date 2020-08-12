#include <stdio.h>
#include <string.h>
union X_men
{
    int power;//Here power and id both are shared memory data
    int id;
};

int main()
{
    union X_men Wolverine;
    Wolverine.id =1;
    printf("id of wolverine is %d\n",Wolverine.id);
    // Wolverine.id=NULL;
    Wolverine.power=87;
    printf("power of wolverine is %d\n",Wolverine.power);
    Wolverine.id =1;
    printf("id of wolverine is %d\n",Wolverine.id);
    printf("%d\n",sizeof(union X_men));
    return 0; 
}