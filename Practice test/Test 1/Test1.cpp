#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

int main(){
    float a,b,average;

    printf("skriv in tal 1: ");
    scanf("%f",&a);
    printf("skriv in tal 2: ");
    scanf("%f",&b);

    average = (a+b)/2;

    if (a>b){
        printf("%.2f\n%.2f\n",b,a);
    }
    else if (a<b){
        printf("%.2f\n%.2f\n",a,b);
    }
    else{
        printf("Talen är lika stora!\n");
    }
    printf("medelvärdet är %.2f",average);
    return 0;
}