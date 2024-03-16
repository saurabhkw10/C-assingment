#include <stdio.h>
int main() 
{
    int number1, number2;

    printf("Enter the first integer: ");
    scanf("%d", &number1);
    printf("Enter the second integer: ");
    scanf("%d", &number2);

    if (number1 == number2) 
	{
        printf("Number1 and Number2 are equal.\n");
    } else {
        printf("Number1 and Number2 are not equal.\n");
    }
}