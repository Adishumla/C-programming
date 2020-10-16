#include<stdio.h>
#include <stdlib.h>


int main(){
    float resistance, current;
    printf("Input the resistance: ");
    scanf("%f",&resistance);

    printf("Input the current: ");
    scanf("%f",&current);

    printf("The effect is: %.1f\n",pow(current,2)*resistance);

system("Pause");
return 0;
}