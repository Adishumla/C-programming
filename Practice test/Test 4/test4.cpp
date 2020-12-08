#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

int main(){
    int i,tal[10],sum=0,antal;

    printf("How many values do you want do calculate? ");
    scanf("%d",&antal);

    for(i=0 ; i<antal ; i++ ){
        printf("Input the value\n");
        scanf("%d",&tal[i]);
    }
    for(i=0 ; i<antal ; i++){
        printf("%d ",tal[i]);
        sum=sum+tal[i];
    }
    printf("\n The sum is: %d",sum);


    return 0;
}