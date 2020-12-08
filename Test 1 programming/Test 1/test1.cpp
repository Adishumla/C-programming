#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
// adam.garali@gmail.com	
// 0709404650

int main()
{
printf("This is test 1\n\n");
float tal1, tal2,add,sub,div,mult;
printf("In this program you will write 2 numbers and then the program will do the calculations\n");
printf("Please input the first number ");
scanf("%f",&tal1);
printf("Input the second number ");
scanf("%f",&tal2);
add=tal1+tal2;
sub=tal1-tal2;
div=tal1/tal2;
mult=tal1*tal2;
printf("\n%.2f\n%.2f\n%.2f\n%.2f\n\n",add,sub,div,mult);
system("PAUSE");
return 0; 
}