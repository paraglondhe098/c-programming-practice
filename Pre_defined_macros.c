#include <stdio.h>
#include <string.h>
int main()
{
    
    printf("Current file name is %s\n",__FILE__);
    printf("Current DATE is %s\n",__DATE__);
    printf("Current time is %s\n",__TIME__);
    printf("This line no. is %d\n",__LINE__);
    printf("ANSI = %d\n",__STDC__); //to check wheather program is running at ANSI standard
    return 0; 
}