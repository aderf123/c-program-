#include <stdio.h>

int main() {
    float radius;
    const float PI = 3.142;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    printf("Area = %.2f\n", PI * radius * radius);
    printf("Circumference = %.2f\n", 2 * PI * radius);

    return 0;
}