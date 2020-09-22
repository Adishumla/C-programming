#include<stdio.h>

int main()
{
    char fullName[25], address[25], postalAdress[25];

    printf("What is your full name?\n");
    gets(fullName);

    printf("\nWhat is your address?\n");
    gets(address);

    printf("\nWhat is your postaladdress?\n");
    gets(postalAdress);
    
    printf("\n%s from %s in %s", fullName, address, postalAdress);

    return 0;
}
