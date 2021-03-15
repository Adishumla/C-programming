#include<stdio.h>
#include<stdlib.h>

int main()
{
FILE *f;
 int buf[6],i,tal;
 for (i=1;i<=3;i++)
 {
 printf("Skriv in tal %i\n ",i);
 scanf("%i",&tal);
 buf[i]=tal;
 }
 f = fopen("C:\\filtest\\uppg5.txt","w");
 for (i=1;i<=3;i++)
 {
 fprintf(f,"%i\n", buf[i]);
 }
 fclose(f);
 f = fopen("C:\\filtest\\uppg5.txt","r");
 for (i=1;i<=3;i++)
 {
 fscanf(f,"%d",&buf[i]);
 }
 for (i=3;i>=1;i--)
 {
 printf("%d\n",buf[i]);
 }
 fclose(f);
 system("PAUSE");
 return 0;
}