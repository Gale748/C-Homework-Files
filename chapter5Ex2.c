#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first integer: ");
    scanf_s("%d", &num1);

    printf("Enter the second integer: ");
    scanf_s("%d", &num2);

    if (num1 % num2 == 0) {
        printf("%d is evenly divisible by %d\n", num1, num2);
    }
    else {
        printf("%d is not evenly divisible by %d\n", num1, num2);
    }

    return 0;
}

/*Chapter 5 Excerise 2, Write a program that asks the user to type in two integer values at
the terminal. Test these two numbers to determine if the first is evenly
divisible by the second, and then display an appropriate message at
the terminal.*/