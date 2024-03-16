#include <stdio.h>
int main() 
{
    int tmp;
    printf("Enter the temperature in centigrade: ");
    scanf("%d", &tmp);
    if (tmp < 0) 
	{
        printf("Freezing weather.\n");
    } 
	else if (tmp < 10) 
	{
        printf("Very cold weather.\n");
    } 
	else if (tmp < 20) 
	{
        printf("Cold weather.\n");
    } 
	else if (tmp < 30) 
	{
        printf("Normal in temp.\n");
    } 
	else if (tmp < 40) 
	{
        printf("It's Hot.\n");
    } 
	else 
	{
        printf("It's very hot.\n");
    }
}