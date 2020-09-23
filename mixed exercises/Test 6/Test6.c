#include<stdio.h>
#include <stdlib.h>

int main()
{
    float salary;

    printf("What is your gross salary in sek?\n");
    scanf("%f", &salary);
    printf("You will have to pay %.1fkr in taxes\nYour net salary is %.1f\n", salary*.33, salary*.67);
    printf("You kan spend %.1f on food\nOn clothes you can spend %.1f\nOn entertainment you can spend %.1f\nAnd %.1f will be going in your savings\n",
     salary*.4, salary*.2, salary*.3, salary*.1);
     printf("Excess money at the end of the month will be going into your savings\n");

    system("Pause");
    return 0;
}