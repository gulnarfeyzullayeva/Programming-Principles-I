#include <stdio.h>
int main(void) {
    int count = 1;
    while (count <= 3)
    {
        printf("%d\n", count);
        // count never changes
    }
    printf("Done\n"); 
}