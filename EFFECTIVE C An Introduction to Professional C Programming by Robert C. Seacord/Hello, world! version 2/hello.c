#include <stdio.h>
#include <stdlib.h>
int main(void) {                      //chapter 1 page 5
 if (puts("Hello, world!") == EOF) {
 return EXIT_FAILURE;
 // code here never executes
 }
 return EXIT_SUCCESS;
 // code here never executes
}