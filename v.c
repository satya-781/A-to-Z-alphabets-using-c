#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of lines for V: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n * 2 - 1; j++) {
            if (j == i || j == (n * 2 - 1) - i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
