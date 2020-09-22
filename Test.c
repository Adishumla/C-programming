#include <stdio.h>
int main()
{
    // Asks the user for their name, then prints the name out with a message. 
printf("Hi! What is your first name?\n");
char name[1];
scanf("%s", name);
printf("Hi %s! That is a beautiful name!\n", name);

printf("Please select one of these car brands below\nSelect by writing 1,2 or 3.\n");
int car;
scanf("%a", &car);
if(car = 1)
{
    printf("BMW! those are nice!");
}
else if(car = 2)
{
printf("Volvo! I see you like a secure car!");
}
else if(car = 3)
{
    printf("Ferrari! Fast and sporty! I hope you don't drive to fast %s!", name);
}
else
{
    printf("Hmm, You choose a number that doesn't exist in this list!");
}


return 0;
}