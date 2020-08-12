struct driver
{
    char name[30];
    int lic_no;
    char route[50];
    int distance;
};
#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct driver drv;
    int n;
    int i;
    printf("Enter the total number of drivers =>> ");
    scanf("%d", &n);
    drv driverlist[n];
    for (i = 0; i < n; i++)
    {
        char name[30];
        int lic_no;
        char route[50];
        int distance;
        printf("\nWelcome, Driver no.%d, Please enter your details.\n\n", i+1);
        printf("Driver's name =>  ");
        scanf("%s", name);
        strcpy(driverlist[i].name, name);
        printf("Driver's Liscence number =>");
        scanf("%d", &lic_no);
        driverlist[i].lic_no=lic_no;
        printf("Driver's route =>");
        scanf("%s", route);
        strcpy(driverlist[i].route, route);
        printf("Distance travelled in km =>");
        scanf("%d", &distance);
        driverlist[i].distance=distance;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d)Driver no.-%d\n", i+1, i+1);
        printf("  1.Name of the driver is %s \n", driverlist[i].name);
        printf("  2.His driving liscence no. is %d \n", driverlist[i].lic_no);
        printf("  3.His route is %s \n", driverlist[i].route);
        printf("  4.Distance traveled (in km) by him is %d \n", driverlist[i].distance);
    }
    return 0;
}
