#include <stdio.h>

long int x_to_the_n(int x, int n) {
    long int result = 1;
    int i;

    for (i = 0; i < n; i++) {
        result *= x;
    }

    return result;
}

int main() {
    int x, n;

    printf("Enter the value of x: ");
    scanf_s("%d", &x);

    printf("Enter the value of n: ");
    scanf_s("%d", &n);

    printf("%d to the power of %d is %ld\n", x, n, x_to_the_n(x, n));

    return 0;
}