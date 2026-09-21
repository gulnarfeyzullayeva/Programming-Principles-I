#include <stdio.h>

int main(void){
    double C, F;
    printf("Celsius: ");
    scanf("%lf", &C);
    F = C * 9 / 5 + 32;
    printf("Fahrenheit: %.2f\n", F);
    return 0;
}