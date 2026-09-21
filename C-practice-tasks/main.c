#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, d;
    printf("Width: ");
    scanf("%lf", &a);

    printf("Height; ");
    scanf("%lf", &b);

    d = sqrt(pow(a, 2) + pow(b, 2));
    printf("Diagonal: %.2f\n", d);
    return 0;
}