#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

float omkrets(){
    float radie, omkr;
    printf("skriv in radien på cirkeln ");
    scanf("%f",&radie);
    omkr=2*3.14*radie;
    return omkr;
} 

int main(){
    float c1,c2, totalomkrets;

    c1=omkrets();
    c2=omkrets();

    totalomkrets=c1+c2;

    printf("Totala omkretsen är: %.2f",totalomkrets);

    return 0;
}