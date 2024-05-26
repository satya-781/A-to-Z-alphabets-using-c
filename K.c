#include <stdio.h>

int main() {
    int n;

    // Get the number of lines from the user
    printf("Enter the number of lines for K: ");
    scanf("%d", &n);

    // Print the letter 'K'
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j == 1 || (i + j == n + 1 && j <= n  + 1) || (i == j && j > n / 2 + 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
