#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter the number of lines for the letter W: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n * 2; j++) {
            if ((j == 0 || j == n * 2 - 1 || (j == i + n && i >=n/10  ) || (j == n - i - 1 && i >=n/10))) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
