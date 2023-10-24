#include <stdio.h>

/**
 * main - df
 * Return: 0
 */
int main() {
    int a = 1, b = 2, count = 2;

    // Print the first two Fibonacci numbers
    printf("%d, %d, ", a, b);

    // Calculate and print the next 96 Fibonacci numbers
    while (count < 98) {
        // Compute the next Fibonacci number
        int next = a + b;

        // Print the next Fibonacci number with the appropriate separator
        if (count < 97) {
            printf("%d, ", next);
        } else {
            printf("%d\n", next); // Print a newline after the last number
        }

        // Update values for the next iteration
        a = b;
        b = next;
        count++;
}
return (0);
}
