#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of lines for the letter I: ");
    scanf("%d", &n);
    if (n % 2 == 0) 
        printf("Please enter an odd number of lines for a symmetric I.\n");
     else {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (j == (n / 2) + 1 || i == 1 || i == n) {
                    printf("*");
                } else 
                    printf(" ");             }
            printf("\n");}}
    return 0;
}

