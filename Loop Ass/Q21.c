#include <stdio.h>
int main() 
{
    int terms, i;
    int sum = 0, number = 0, multiplier = 1;
    printf("Input the number of terms: ");
    scanf("%d", &terms);
    printf("Expected Output:\n");
    for (i = 0; i < terms; i++) 
	{
        number = number * 10 + 1; 
        printf("%d", number);
        if (i != terms - 1) 
		{
            printf(" + ");
        }
        sum += number;
    }
    printf("\nThe Sum is: %d\n", sum);
}
