#include <stdio.h>

int main() {
    int n, i, j;

    // Get the number of lines from the user
    printf("Enter the number of lines for the letter W: ");
    scanf("%d", &n);

    // Print the letter W using asterisks
    for (i = 0; i < n; i++) {
        for (j = 0; j < n * 2; j++) {
            // Print asterisk at the appropriate positions
            if ((j == i || j == n + i || j == n * 2 - i - 1 || j == n * 2 - 1 - i) && (j < n || j >= n * 2 - n)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
