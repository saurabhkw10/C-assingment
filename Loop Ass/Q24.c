#include <stdio.h>
void printDiamond(int num) 
{
    int str = 1;
    while(str <= num) {
        int i = 1;
        while(i <= (num - str) * 2 + 1) 
		{
            printf(" ");
            i++;
        }
        i = 0;
        while(i < 2 * str - 1) 
		{
            printf("* ");
            i++;
        }
        str++;
        printf("\n");
    }
    str = num - 1;
    while(str != 0) 
	{
        int i = 1;
        while(i <= (num - str) * 2 + 1) 
		{
            printf(" ");
            i++;
        }
        i = 0;
        while(i < 2 * str - 1) 
		{
            printf("* ");
            i++;
        }
        str--;
        printf("\n");
    }
}

int main() 
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    printDiamond(number);
    return 0;
}