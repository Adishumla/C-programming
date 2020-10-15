#include<stdio.h>
#include <stdlib.h>

int main()
{
        float sek;

    printf("How much sek do you want to convert into euros\n");

    scanf("%f", &sek);

    printf("That would be %0.2f euros\n", sek*0.096);

    system("Pause");
    return 0;
}