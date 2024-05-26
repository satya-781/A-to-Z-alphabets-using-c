#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of lines for the capital 'E': ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("*");
        for (int j = 0; j < n; j++) {
            if (i == 0 || i ==n - 1) {
                printf("*");
            } else if (n % 2 == 0) {              
                if (i == n / 2 || i == (n / 2) - 1) {
                    printf("*");
                } else {                    
                    printf(" ");
                }
            } else {                
                if (i == n / 2) {
                    printf("*");
                } else {                    
                    printf(" "); }}}
        printf("\n"); }
    return 0;
}
