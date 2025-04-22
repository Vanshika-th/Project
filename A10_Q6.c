#include <stdio.h>

// Function to swap two numbers using XOR
void swapUsingXOR(int *a, int *b) {
    if (a != b) {  // Avoid self-swap issues
        *a = *a ^ *b;
        *b = *a ^ *b;
        *a = *a ^ *b;
    }
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Display before swapping
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Swap numbers
    swapUsingXOR(&num1, &num2);

    // Display after swapping
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

