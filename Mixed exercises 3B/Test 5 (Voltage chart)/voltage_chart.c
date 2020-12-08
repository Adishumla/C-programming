#include<stdio.h>
#include<stdlib.h>

int main() {
    float resistance = 100;

    for (float current = -0; current <= 1.1; current = current+0.1) {
        printf("%.0f\n", resistance * current);
    }

    system("PAUSE");
    return 0;
}