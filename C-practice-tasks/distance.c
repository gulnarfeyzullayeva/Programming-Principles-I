#include <stdio.h>
#include <math.h>

int main(void){
    double x1, y1, x2, y2, D;
    printf("x1 = ");
    scanf("%lf", &x1);

    printf("y1 = ");
    scanf("%lf", &y1);

    printf("x2 = ");
    scanf("%lf", &x2);

    printf("y2 = ");
    scanf("%lf", &y2);

    D = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    printf("Distance: %.2f\n", D);
    return 0;
}