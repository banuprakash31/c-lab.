#include <stdio.h>

void add(float a, float b) {
    float sum = a + b;
    printf("Addition: %.2f + %.2f = %.2f\n", a, b, sum);
}
float mul(float a, float b) {
    return a * b;
}

float div_func(float a, float b) {
    if (b == 0) {
    printf("Error: Division by zero!\n");
    return 0;
    }
    return a / b;
}

int main() {
    float x, y, result;

    printf("Enter two numbers: ");
    scanf("%f %f", &x, &y);

    add(x, y);

    result = mul(x, y);
    printf("Multiplication: %.2f * %.2f = %.2f\n", x, y, result);

    result = div_func(x, y);
    if (y != 0)
    printf("Division: %.2f / %.2f = %.2f\n", x, y, result);

    return 0;
}
