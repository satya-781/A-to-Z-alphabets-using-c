#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of lines for N: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j == 1 || j == n || (i > 1 && i == j)) {
                printf("*");
            } else {
                printf(" ");
            } }
        printf("\n"); }
    return 0;
}
