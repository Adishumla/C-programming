#include<stdio.h>
#include <stdlib.h>


int main(){
    float resistance, effect;
    printf("Input the resistance: ");
    scanf("%f",&resistance);

    printf("Input the effect: ");
    scanf("%f",&effect);

    printf("The voltage is: %.1f\n",effect/resistance);

system("Pause");
return 0;
}