#include <stdio.h>
int main() 
{
    int rows, i, j;
    int num = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Floyd's Triangle:\n");
    for (i = 1; i <= rows; i++) 
	{
        for (j = 1; j <= i; j++) 
		{
            printf("%d", num++ % 2);
        }
        printf("\n");
    }
}
