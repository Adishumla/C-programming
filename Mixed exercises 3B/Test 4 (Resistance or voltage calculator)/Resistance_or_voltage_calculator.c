#include<stdio.h>
#include<stdlib.h>

int main(){
    int userInput;
    float resistance, current, voltage;

    printf("Press 1 to calculate the resistance or 2 to calculate the voltage: ");
    scanf("%d",&userInput);

    if(userInput==1){
        printf("\nYou have choosen to calculate the resistance\nInput the current: ");
        scanf("%f",&current);
        printf("input the voltage: ");
        scanf("%f",&voltage);
        printf("The resistance is %.2f\n",voltage/current);
    }
    else if(userInput==2){
        printf("\nYou have choosen to calculate the current\nInput resistance: ");
        scanf("%f", &resistance);
        printf("Input the voltage: ");
        scanf("%f", &voltage);
        printf("The current is %.2f\n", voltage/resistance);
    }
    else{
        puts("Sorry, but that is not an option");
    }
    system("PAUSE");
    return 0;
}