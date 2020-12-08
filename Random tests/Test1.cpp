#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

int main()
{
int i ;
char namn[15],c ;
printf("Skriv in en namn\n");
i=0;
while ((c=getchar())!='\n')
{
namn[i]=c;
 i++;
 }
namn[i]='\0'; /*sista pos i strängen tilldelas värdet
null*/
printf("%s\n",namn); /*skriver ut hela strängen*/
printf("%c\n",namn[0]); /*skriver ut pos 0 i strängen*/
printf("%c\n",namn[2]); 

return 0; 
}