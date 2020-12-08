#include<stdio.h>

int main()
{
    int value[5], i=1;
    while (i <= 5)
    {
        printf("Enter value %d\n", i++);
        scanf("%d", &value[i]);
    }
    i=1;
    while (i<=5)
    {
        printf("Value %d = %d\n",i++,value[i]);
    }
    

    return 0;
}