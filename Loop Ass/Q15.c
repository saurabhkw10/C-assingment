#include <stdio.h>
int main() 
{
    int n, i, sum = 0;
    printf("Input number of terms: ");
    scanf("%d", &n);
    printf("Expected Output:\n");
    printf("The even numbers are: ");
    for(i = 1; i <= n; i++) 
	{
        printf("%d ", 2 * i); 
        sum += 2 * i;
    }
    printf("\n");
    printf("The Sum of even Natural Number upto %d terms: %d\n", n, sum);
}
