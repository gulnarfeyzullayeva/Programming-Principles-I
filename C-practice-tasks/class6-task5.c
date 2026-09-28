#include <stdio.h>
int main(void) {
    int pin;
    printf("PIN: ");
    scanf("%d", &pin);
    while (pin != 1234) {
        printf("Wrong. Try again: ");
        scanf("%d", &pin);
    }
    return 0;
}