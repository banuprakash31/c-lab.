#include <stdio.h>

// Recursive function to find the nth Fibonacci number
int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;  // Base cases: first and second Fibonacci numbers are 1
    }
    return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case
}

int main() {
    int n, i = 1;
    int fib;

    printf("Enter the upper limit n: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d:\n", n);

    while (1) {
    fib = fibonacci(i);
    if (fib > n) {
    break;
    }
    printf("%d ", fib);
    i++;
    }

    printf("\n");
    return 0;
}
