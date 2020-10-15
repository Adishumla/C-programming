#include<stdio.h>

int main()
{

    char firstname[1], lastname[14], address[25], postalAddress[14];

    printf("Hi! What is your firstname?");
    scanf("%c",firstname);

    printf("\nHi! %a what is your lastname?", firstname);
    scanf("%s",lastname);

    printf("\nWhat is your address?\n");
    scanf("%s", address);

    printf("\nWhat is your postal address\n");
    scanf("%f", postalAddress);



return 0;
}