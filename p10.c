#include <stdio.h>

// Function to find the GCD using the Euclidean algorithm
int findGCD(int a, int b) {
    int temp;
    
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    
    return a;
}

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);
    
    // Find and print the GCD
    int gcd = findGCD(num1, num2);
    printf("%d\n", gcd);
    
    return 0;
}
