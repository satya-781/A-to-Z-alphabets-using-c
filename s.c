#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of lines for S: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if ((i == 1 || i == n) || (i <= n / 2 && j == 1) || (i == n / 2 + 1)
             || (i > n / 2 && j == n)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
