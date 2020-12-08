#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
// adam.garali@gmail.com	
// 0709404650

float resistance1()
{
    float U1, R1, I1, reisistance1;
    printf("This is for the first resistance\n");
    printf("How much current?\n");
    scanf("%f",&I1);
    printf("how much voltage?\n");
    scanf("%f",&U1);
    R1=U1/I1;
    return reisistance1;
}
float resistance2()
{
    float U2, R2, I2, reisistance2, U1, R1, I1;
    R2=U2/I2;
    printf("The first resistance is %.2f\n",R1);
    printf("The second resistance is %.2f\n",R2);
    return reisistance2;
}

int main()
{
    float U2, R2, I2, reisistance2, U1, R1, I1;
    resistance1();
    printf("This is for the second resistance\n");
    printf("How much current?\n");
    scanf("%f",&I2);
    printf("How much voltage?\n");
    scanf("%f",&U2);
    resistance2();

    system("PAUSE");
    return 0;
}