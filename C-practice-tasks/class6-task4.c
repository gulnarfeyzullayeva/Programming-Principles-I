#include <stdio.h>
int main(void) {
    int n;
    int x;
    int count = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter value: ");
        scanf("%d", &x);

        if (x > 0) {
            count++;
        }
    }
    printf("Positive numbers: %d\n", count);
    return 0;
}