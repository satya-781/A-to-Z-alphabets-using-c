#include <stdio.h>
int main() {
    int lines;
    printf("Enter the number of lines for G: ");
    scanf("%d", &lines);
    if (lines <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;}
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < lines; j++) {
            if (i == 0 || i == lines - 1 || (j == 0 && i <= lines ) || (j == lines - 1 && i >= lines / 2) || (i == lines / 2 && j >= lines / 2)) {
                printf("*");
            } else {
                printf(" "); } }
        printf("\n");}
 return 0;  
}
