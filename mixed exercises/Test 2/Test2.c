#include<stdio.h>
#include <stdlib.h>

int main()
{
        float number;
   
    printf("Input a number with any number of decimals: ");  
    
    // reads and stores input
    scanf("%f", &number);

    // displays output with 1,2 and 3 decimal. (0.x means number of decimals, 0.1 = 1 decimal, 0.2 = 2 decimals and 0.7 = 7 decimals)
    printf("The number you enterd is:\nWith 1 decimal: %0.1f\nWith 2 decimals: %0.2f\nWith 3 decimals: %0.3f\n", number, number, number);

    system("Pause");
    return 0;
}