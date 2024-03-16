#include <stdio.h>
int main() 
{
    int num, i;
    printf("Input the number (Table to be calculated): ");
    scanf("%d", &num);
    printf("Expected Output:\n");
    for(i = 1; i <= 10; i++) 
	{
        printf("%d X %d = %d\n", num, i, num * i);
    }
}
