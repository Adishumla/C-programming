#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

int main(){
    int i,tal[7] ;

    for(i=0; i<=4; i++){
        printf("skriv in tal %i\n",i+1);
        scanf("%i",&tal[i]);
        //printf("%d",tal);
    }
    printf("\ndet första talet du skrev in var %i\n",tal[0]);
    printf("det sista talet du skrev var %i\n",tal[4]);


    return 0;
}


