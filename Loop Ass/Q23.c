#include <stdio.h>
int isArmstrong(int num) 
{
    int originalNum, n = 0, result = 0, remainder;
    originalNum = num;
    while (originalNum != 0) 
	{
        originalNum /= 10;
        ++n;
    }
    originalNum = num;
    while (originalNum != 0) 
	{
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }
    if (result == num)
        return 1; 
    else
        return 0; 
}
int main() 
{
    int startRange, endRange, i;
    printf("Input starting number of range: ");
    scanf("%d", &startRange);
    printf("Input ending number of range: ");
    scanf("%d", &endRange);
    printf("Armstrong numbers in given range are: ");
    for (i = startRange; i <= endRange; i++) 
	{
        if (isArmstrong(i)) 
		{
            printf("%d ", i);
        }
    }
    printf("\n");
}
