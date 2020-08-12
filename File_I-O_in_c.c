#include <stdio.h>
#include <string.h>
int main()
{
    FILE* fptr;
    char string1[50];
    //~~~~~~~~For reading a file~~~~~~~~
    // fptr=fopen("myfile.txt","r");
    // fscanf(fptr,"%s",string1);
    // fclose(fptr);
    // printf("%s\n",string1);   
    //~~~~~~~~For writing a file~~~~~~~~
    strcpy(string1,"This is modified data\n");
    fptr=fopen("myfile.txt","w");
    fprintf(fptr,"%s",string1);
    fclose(fptr);
    printf("%s\n",string1);
    return 0; 
}