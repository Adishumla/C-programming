//Christian Hult, Ei20 || 070-269 43 06

#include <stdio.h>
#include <clocale>

/*Jag vill skapa en array med 4 positioner, och sedan få ut minnesadressen för varje värde.*/

int main() {
setlocale(LC_ALL,"Swedish");
	
	int c[10] = {5, 10, 15, 20}; 	
	int i=0, a;						

	for (i; i<sizeof(a);i++){

	printf("Värdet på positionen: %d\n", &c[i]); 	//Visar värdena i arrayen
	printf("Minnesadress: %d\n\n", &c[i]); 			//Minnesadress för varje position i arrayen
}

return 0; }

