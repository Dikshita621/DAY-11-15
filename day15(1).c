//Q29: Write a program to calculate the factorial of a number.//
#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return 1;
    }

    for (i = 1; i <= num; i++) {
        factorial *= i;
    }

    printf("The factorial of %d is: %llu\n", num, factorial);

    return 0;
}
