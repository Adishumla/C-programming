#include<stdio.h>
#include<stdlib.h>

int main()
{
float sales;

printf("How much have you sold for in sek: ");
scanf("%f", &sales);
printf("Your commission is %.1fkr \n", sales*.1);

system("Pause");
return 0;
}


