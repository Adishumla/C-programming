#include<stdio.h>
#include <stdlib.h>

int main()
{
    float minutes;

    printf("How many minuts did you speak on your phone?\n");
    scanf("%f", &minutes);
    printf("That kost you %0.1fkr\n", minutes*2.30);

    system("Pause");
    return 0;
}