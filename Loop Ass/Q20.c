#include <stdio.h>
int main() 
{
    int n, i, sum = 0;
    printf("Input the number of terms: ");
    scanf("%d", &n);
    printf("Expected Output:\n");
    printf("The square natural numbers up to %d terms are: ", n);
    for(i = 1; i <= n; i++) 
	{
        printf("%d ", i * i);
        sum += i * i; 
    }
    printf("\n");
    printf("The Sum of Square Natural Numbers up to %d terms = %d\n", n, sum);
}
