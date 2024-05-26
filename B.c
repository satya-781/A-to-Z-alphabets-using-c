#include <stdio.h>

int main() {
    int i,j,height,width;

    printf("Enter the number of lines for the capital B: ");
    scanf("%d", &height);
    width=height/2+height%2;
    if (height < 3) 
        printf("Number of lines should be at least 3.\n");
    
    for ( i = 0; i < height; i++) {
        printf("*");
        for ( j = 0; j < width; j++) {
            if (i == 0 ||i==height-1 || i == height / 2 && j<width-1)
                printf("*");
            else if (j==width-1) printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
