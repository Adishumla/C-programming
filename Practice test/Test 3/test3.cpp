#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

int main(){
    int i, age;
    char name[15], c;

    printf("What is your name? ");
    i=0;
    while ((c=getchar())!='\n')
    {
        name[i]=c;
        i++;
    }
    name[i]='\0';
    printf("How old are you? ");
    scanf("%d",&age);

    printf("Hi %s you are %d years, next year you will be %d years",name, age, age+1);

    return 0;
}