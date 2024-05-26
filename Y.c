#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter the number of lines for the letter Y: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if ((j == i && j <= n / 2) || (j == n / 2 && i >= n / 2) || (j == n - i - 1 && j >= n / 2)) {
                printf("*");
            } else {
                printf(" ");
            }
        }        
        printf("\n");
    }
    return 0;
}
