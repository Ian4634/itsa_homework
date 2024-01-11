#include <stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int is_prime = 1;
        
        if (n < 2) {
            printf("NO\n");
            continue;
        }
        
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                is_prime = 0;
                break;
            }
        }
        
        if (is_prime)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
