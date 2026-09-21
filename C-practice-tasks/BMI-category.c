#include <stdio.h>

int main(void) {
    double weight, height, bmi;
    scanf("%lf %lf", &weight, &height);
    bmi = weight / (height * height);
    if (bmi < 18.5) {
        printf("Underweight");
    } else if (bmi < 25.0) {
        printf("Normal");
    } else if (bmi < 30.0) {
        printf("Overweight");
    } else {
        printf("Obese");
    }
    return 0;
}