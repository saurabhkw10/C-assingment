#include <stdio.h>
int main() 
{
    int rows, i, j, space, asterisks;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Pattern:\n");
    for (i = 1; i <= rows; i++) 
	{
        for (space = 1; space <= rows - i; space++) 
		{
            printf("  ");
        }
        for (asterisks = 1; asterisks <= 2 * i - 1; asterisks++) 
		{
            printf(" * ");
        }
        printf("\n");
    }
}
