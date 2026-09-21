#include <stdio.h>

int main(void) {
    double r, area, c, d;
    const double PI = 3.14159;

    printf("Radius: ");
    scanf("%lf", &r);

    area = PI * r * r;
    c = 2 * PI * r;
    d = 2 * r;

    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f\n", c);
    printf("Diameter: %.2f\n", d);
    return 0;
}