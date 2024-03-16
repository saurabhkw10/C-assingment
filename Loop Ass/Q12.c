#include <stdio.h>
int main() 
{
    int rows, i, j, num = 1, spaces;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Pattern:\n");
    for (i = 1; i <= rows; i++) 
	{
        for (spaces = 1; spaces <= rows - i; spaces++) 
		{
            printf(" ");
        }
        for (j = 1; j <= i; j++) 
		{
            printf(" %d ", num++);
        }
        printf("\n");
    }
}
