#include<stdio.h>
#include <stdlib.h>


int main(){
    float resistance, current;
    printf("Input the resistance: ");
    scanf("%f",&resistance);

    printf("Input the current: ");
    scanf("%f",&current);

    printf("The voltage is: %.1f\n",resistance*current);

system("Pause");
return 0;
}