#include<stdio.h>
#include <stdlib.h> // Neded for system("Pause"); (wont work with out it, only works on windowns for other systems use: printf("Press enter to continue...\n"); getchar(); )

int main()
{
    char fullName[25], address[25], postalAdress[25];

    printf("What is your full name?\n"); // Asks for users full name.
    gets(fullName);                      // Stores users full name to be used later.

    printf("\nWhat is your address?\n");
    gets(address);

    printf("\nWhat is your postaladdress?\n");
    gets(postalAdress);
    
    printf("\n%s from %s in %s\n\n", fullName, address, postalAdress); // Writes the users full name, address and postaladdress.
    system("Pause"); // Pauses system so the user can see if the information was correct.

    return 0;
}
