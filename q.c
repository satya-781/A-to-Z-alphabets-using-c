#include <stdio.h>

int main() {
    int rows;

    // Input the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Print the capital letter 'Q'
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows; j++) {
            if ((i == 1 || i == rows) && (j > 1 && j < rows))
                printf("*");
            else if ((i > 1 && i < rows) && (j == 1 || j == rows))
                printf("*");
            else if (i == j && i > rows / 2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
        for (int i = 1; i <=rows/4; i++) {
        for (int j = 1; j <=rows/4; j++) {
             for (int a=1;a<=rows;a++)
              printf(" ");
            if (i == j)
                printf("*");
            else
                printf(" ");
                break;
        }
        printf("\n");}
    return 0;
}
