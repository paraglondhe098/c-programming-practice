#include <stdio.h>
#include <string.h>
struct avenger
{   //structures are user defined data types
    char Name[20];
    float power;
    int id;
    char favourite_char;
}Captain_america, Iron_man, Hulk;

int main()
{
    struct avenger Black_widow;
    strcpy(Captain_america.Name, "Captain America");
    Captain_america.power= 87.87;
    Captain_america.id=32;
    Captain_america.favourite_char='A';
    printf("%s is the most famous superhero from marver comics his ID is %d and power is %f and favourite character is %c\n", Captain_america.Name, Captain_america.id, Captain_america.power, Captain_america.favourite_char);
    strcpy(Black_widow.Name, "Black widow");
    printf("%d", sizeof(struct avenger));
    return 0;
}