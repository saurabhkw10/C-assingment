#include <stdio.h>
int main() 
{
    int i, num;
    float sum = 0, average;
    printf("Input the 10 numbers:\n");
    for(i = 1; i <= 10; i++) 
	{
        printf("Number%d: ", i);
        scanf("%d", &num);
        sum += num; 
    }
    average = sum / 10; 
    printf("The sum of 10 numbers is: %f\n", sum);
    printf("The Average is: %f\n", average);
}
