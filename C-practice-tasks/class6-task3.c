#include <stdio.h>
int main(void) {
    int n;
    int x;
    int sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &x);
        sum = sum + x;
    }
    printf("Sum = %d\n", sum);
    return 0;
}