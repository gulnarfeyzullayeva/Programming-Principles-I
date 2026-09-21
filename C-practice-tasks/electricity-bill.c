#include <stdio.h>

int main(void) {
    double kwh, bill;
    scanf("%lf", &kwh);

    if (kwh <= 100) {
        bill = kwh * 0.10;
    } else if (kwh <= 200) {
        bill = kwh * 0.15 - 5;
    } else {
        bill = kwh * 0.20 - 15;
    }
    printf("Bill = %.2f\n", bill);
    return 0;
}