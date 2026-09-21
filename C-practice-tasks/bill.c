#include <stdio.h>

int main(void){
    int p;
    double b, pay;
    printf("People: ");
    scanf("%d", &p);
    printf("Bill: ");
    scanf("%lf", &b);
    pay = b / p;
    printf("Each person pays: %.2f\n", pay);
    return 0;
}