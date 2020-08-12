#include <stdio.h>
int main()
{
    FILE* fptr=NULL;
    //*~~~~Use of fgetc and fgetc
    // fptr=fopen("myfile.txt","r");
    // char a=fgetc(fptr);
    // char b=fgetc(fptr);
    // printf("The char is %c%c\n",a,b);
    // char str[20];
    // fgets(str,5,fptr);
    // printf("String is %s\n",str);
    // fclose(fptr);

    //*~~~~Use of fpuc fputs
    fptr=fopen("myfile.txt","w");
    fputc('a',fptr);
    fputs("\nHello",fptr);
    fclose(fptr);
    return 0; 
}