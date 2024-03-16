#include <stdio.h>
int main() 
{
    int number, i;
    unsigned long long factorial = 1;
    printf("Input the number: ");
    scanf("%d", &number);
    if (number < 0) 
	{
        printf("Factorial of a negative number is undefined.\n");
    } 
	else 
	{
        for (i = 1; i <= number; i++) 
		{
        	factorial *= i;
        }
        printf("The Factorial of %d is: %llu\n", number, factorial);
    }
}
