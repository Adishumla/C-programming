#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
// adam.garali@gmail.com	
// 0709404650

int main()
{
    float F, C, tal2;
    //int tal2, tal1;
    printf("From how many degrees Celcuis do you want to calculate? ");
    scanf("%f",&C);
    printf("What is the max number of degrees Celsius you want to calculate? ");
    scanf("%f",&tal2);
    printf("Celcius    Farenhite\n");
    printf("--------------------\n");
    for (C ; C <= tal2; C++)
    {
        F = (C * 9 / 5) + 32;
        printf(" %.1f        %.1f \n", C, F);
    }
    printf("--------------------\n");
    system("PAUSE");
    return 0;
}