#include <stdio.h>
int main() {
    int i,j,n;
    printf("Enter the number of lines for F: ");
    scanf("%d", &n);
    if (n < 3) 
        printf("Minimum 3 lines required!\n");
     printf("F pattern using %d lines:\n", n);
for (i = 0; i < n; i++) 
        printf("*");   
    printf("\n");
    for (i = 0; i < n / 2; i++) 
        printf("*\n");
    for (i = 0; i < n; i++) 
        printf("*");
    printf("\n");
    for (i = 0; i < n / 2; i++) 
        printf("*\n");
    return 0;
}
