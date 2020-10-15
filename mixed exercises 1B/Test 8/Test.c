#include<stdio.h>
#include<stdlib.h>

int main()
{
float num1, num2;

printf("Welcome to math bot!\nInput your first number: ");
scanf("%f", &num1);
printf("Input your second number: ");
scanf("%f", &num2);

printf("%.0f + %.0f = %.0f\n%.0f - %.0f = %.0f\n%.0f * %.0f = %.0f\n%.0f/%.0f = %.6f\n",
num1, num2, num1+num2, num1, num2, num1-num2, num1, num2, num1*num2, num1, num2, num1/num2);

system("Pause");
return 0;
}


