#include<stdio.h>
#include<stdlib.h>

int main()

{
    char pers1[15], pers2[15], pers3[10]; // pers for person
    float winings;

    printf("What is person 1s name?\n");
    gets(pers1);
    printf("What is person 2s name?\n");
    gets(pers2);
    printf("What is person 3s name?\n");
    gets(pers3);
    printf("How much money did you win?\n");
    scanf("%f", &winings);

    printf("%s will be getting %.1fkr\n%s will be getting %.1fkr\n%s will be getting %.1fkr\n",
    pers1, winings*.3,pers2, winings*.5,pers3, winings*.2);
    
    system("Pause");
    return 0;
}