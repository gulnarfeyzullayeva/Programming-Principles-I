#include <stdio.h>

int main(void) {
    int a, b;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    
    if (a > b) {
        printf("Larger one: %d\n", a);
    } else {
        printf("Larger one: %d\n", b);
    }
    return 0;
}