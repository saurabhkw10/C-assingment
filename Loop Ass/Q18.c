#include <stdio.h>
int main() 
{
    int terms, i;
    int sum = 0, number = 9, multiplier = 1;
    printf("Input the number of terms: ");
    scanf("%d", &terms);
    printf("Expected Output:\n");
    for (i = 0; i < terms; i++) 
	{
        printf("%d ", number);
        sum += number;
        number += 9 * multiplier; 
        multiplier *= 10; 
    }
    printf("\nThe sum of the series = %d\n", sum);
}
