#include <stdio.h>

int main() {
    float number;

    // Prompting the user for input
    printf("Enter a floating-point number: ");
    scanf("%f", &number);

    // Printing the entered float
    printf("You entered: %.2f\n", number);

    return 0;
}