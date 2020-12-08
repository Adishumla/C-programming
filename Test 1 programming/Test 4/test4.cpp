#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
// adam.garali@gmail.com	
// 0709404650

int main()
{
    int i;
    float K,a[3], time, effekt[3];
    for ( i = 1; i <= 2; i++)
    {
        printf("What is the effekt on unit %d ",i);
        scanf("%f",&effekt[i]);
    }
    printf("How many hours are they on? ");
    scanf("%f",&time);
    printf("\n1kwh costs 1.3kr\n\n");
    for ( i = 1; i <= 2; i++)
    {
        a[i]=((effekt[i]*time)/1000)*1.3;
    }
    for ( i = 1; i <= 2; i++)
    {
        printf("unit %d costs you %.2fkr\n",i,a[i]);
    }
    system("PAUSE");
    return 0;
}