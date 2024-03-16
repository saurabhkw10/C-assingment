#include <stdio.h>
int main() 
{
    int n, i;
    printf("Input number of terms: ");
    scanf("%d", &n);
    printf("Expected Output:\n");
    for(i = 1; i <= n; i++) 
	{
        printf("Number is: %d and cube of %d is: %d\n", i, i, i * i * i);
    }
}
