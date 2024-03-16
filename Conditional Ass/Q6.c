#include <stdio.h>
int main() 
{
    int m, n;
    printf("Enter a value for m: ");
    scanf("%d", &m);
    if (m > 0) 
	{
        n = 1;
    } 
	else if (m < 0) 
	{
        n = -1;
    } 
	else 
	{
        n = 0;
    }
    printf("The value of n = %d\n", n);
}