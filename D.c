#include <stdio.h>
int main() {
    int i,j,n;
    printf("Enter the number of lines for the capital D: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j == 1 || j == n ||(i==1||i==n)&&j<n)
                printf("*");            
            else 
                printf(" ");
             }          
            printf("\n");
    }
    return 0; 
}