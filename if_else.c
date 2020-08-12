#include <stdio.h>
//1)If statement
// int main()
// {
//     int a = 2;
//     if (a == 2)
//     {
//         printf("Yest a is equal to 2\n");
//     }
//     printf("Program ended");
//     return 0;
// }
//2)If else statement
// int main()
// {
//     int a = 2;
//     if (a == 2)
//     {
//         printf("Yest a is equal to 2\n");
//     }
//     else
//     {
//         printf(" a is not equal to 2\n");
//     }

//     printf("Program ended");
//     return 0;
// }
//3)If - else ladder : else if is used
//4)Nested if
// C program to illustrate nested-if statement 
#include <stdio.h> 
  
int main() { 
    int i = 10; 
  
    if (i == 10) 
    { 
        // First if statement 
        if (i < 15) 
           printf("i is smaller than 15\n"); 
  
        // Nested - if statement 
        // Will only be executed if statement above 
        // is true 
        if (i < 12) 
            printf("i is smaller than 12 too\n"); 
        else
            printf("i is greater than 15"); 
    } 
  
    return 0; 
}