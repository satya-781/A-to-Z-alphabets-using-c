/*Program to  print capital-A using asterisks*/
#include <stdio.h>
int main()
{
	int i,j,n,width,height;
	printf("\nEnter the number of lines=>");
	scanf("%d",&height);
	width=(2*height)-1;
	n=width/2;
	for (i = 0; i < height; i++) {
        for (j = 0; j <= width; j++) {
            if (j == n || j == (width-n) || (i == height / 2 && j > n && j < (width-n))) 
                printf("*");
            
            else 
                printf(" ");
            
        }
        printf("\n");
        n--;
    }
    return 0;
	
}
