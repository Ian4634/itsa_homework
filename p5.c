#include <stdio.h>

void decimalToBinary8Bit(int decimal) {
    // Ensure the input is within the signed 8-bit range [-128, 127]
    if (decimal < -128 || decimal > 127) {
        return;
    }

    // Iterate through each bit and print its value
    for (int i = 7; i >= 0; i--) {
        int bit = (decimal >> i) & 1;
        printf("%d", bit);
    }

    printf("\n");
}

int main() {
    int decimalInput;

    // Get user input
    scanf("%d", &decimalInput);

    // Convert and print the 8-bit binary representation
    decimalToBinary8Bit(decimalInput);

    return 0;
}
