#include <stdio.h>
int main()
{
    // int arr[3]={1,2,3};
    // char arr1[3];
    // int marks[2][2]={{1,2},{3,4}};               // 2D matrix
    // int Tdm[3][3][3]={{1,2,3},{4,5,6},{7,8,9}}; //3D matrix
    // arr1[0]='1';
    // arr1[1]='b';
    // arr1[2]='c';
    // printf("Second element of arr1 is %c \n",arr1[1]);
    // printf("Second element of arr is %d \n",arr[1]);
    // printf("Second element of marks is %d \n",marks[0][1]);
    // printf("Second element of marks is %d \n",marks[1][1]);
    // printf("First element of TDM is %d \n",Tdm[0][0][0]);
    int arr[5];
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("Enter the %d'th element of arr\n",i);
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        printf("%d'th element of arr is %d\n",i , arr[i]);
    }
    
    
    return 0;
}
