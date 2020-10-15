#include<stdio.h>
#include<stdlib.h>

int main()
{
float height;

printf("How tal are you in meters: ");
scanf("%f", &height);
printf("That is %.0f cm\n", height*100);

system("Pause");
return 0;
}


