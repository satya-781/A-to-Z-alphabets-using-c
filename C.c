#include <stdio.h>

int main() {
    int i,j,n;

    printf("Enter the number of lines for the capital C: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        if (i == 0 || i == n - 1) {
            for (int j = 0; j < n; j++) {
                printf("*");
            }
        } else {
            printf("*");
        }
        printf("\n");
    }


    return 0; 
}
