#include <stdio.h>
#include <stdlib.h>

int is_palindrome(int number) {
    int original = number;
    int reverse = 0;
    
    while (number > 0) {
        reverse = reverse * 10 + number % 10;
        number /= 10;
    }

    return original == reverse;
}

int main() {
    // Generate two random 3-digit numbers
    int number1 = rand() % 900 + 100;  // Random number between 100 and 999
    int number2 = rand() % 900 + 100;  // Random number between 100 and 999

    int product = number1 * number2;
    int largest_palindrome = product;

    if (!is_palindrome(product)) {
        // Find the largest palindrome by decreasing the product
        while (product > 10000) {
            product--;
            if (is_palindrome(product)) {
                largest_palindrome = product;
                break;
            }
        }
    }

    // Save the result in the file
    FILE *file = fopen("102-result", "w");
    if (file != NULL) {
        fprintf(file, "%d", largest_palindrome);
        fclose(file);
    }

    return 0;
}

