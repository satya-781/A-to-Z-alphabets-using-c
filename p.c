#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of lines for P: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j == 1 || (i <= n / 2 && j == n) ) 
                printf("*");
            else if (i==1 ||i==n/2)
                printf("*");
            else 
                printf(" ");}
        printf("\n"); }
    return 0;
}
