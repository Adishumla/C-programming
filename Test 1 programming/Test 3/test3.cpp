#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
// adam.garali@gmail.com	
// 0709404650

int main()
{
    int i,age[20];
    for ( i = 1; i <= 5; i++)
    {
        printf("How old is person %d\n",i);
        scanf("%d",&age[i]);
    }
    printf("\nTheir ages are\n");
    for ( i = 1; i <= 5; i++)
    {
        printf("%d ",age[i]+1);
    }
    printf("\n\nare of legal age\n");
    for( i = 1; i <= 5; i++)
    {
        if (age[i] >= 18)
        {
            printf("%d ",age[i]);
        }
    }
    printf("\n\nNumber of adults\n");
    for ( i = 1; i <= 5 ; i++)
    {
        if(age[i]>=18){
            printf("%d ",i);
        }
    }
    system("PAUSE");
    return 0;   
}