#include <stdio.h>

int main() {
    int n;

    // Get the number of lines from the user
    printf("Enter the number of lines for M: ");
    scanf("%d", &n);

    // Print the letter 'M'
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j == 1 || j == n || (i <= n / 2 && (j == i || j == n - i + 1))) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
