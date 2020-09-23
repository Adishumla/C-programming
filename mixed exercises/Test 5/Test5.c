#include<stdio.h>
#include <stdlib.h>

int main()
{
    float salary;

    printf("What is your gross salary per month in sek?\n");
    scanf("%f", &salary);
    printf("You will have to pay %.1fkr in taxes\nYour net salary is %.1fkr\n", salary*0.33, salary*0.67);

    system("Pause");
    return 0;
}