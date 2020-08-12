#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Emploee
{
    char id[10];
};

int main()
{
    char *id;
    int size;
    typedef struct Emploee em;
    em emlist[3];    
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the size of your ID\n");
        scanf("%d", &size);
        id = (char*)malloc((size+1)*sizeof(char));
        printf("Enter your ID\n");
        scanf("%s", id);
        strcpy(emlist[i].id,id);
        free(id);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Id of the %d th emploee is %s\n",i+1,emlist[i].id);
    }
    

    return 0;
}