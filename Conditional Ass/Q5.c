#include <stdio.h>
int main(void)
{
	int age;
	printf("enter a age:\n");
	scanf("%d",&age);
	if (age>=21)
	{
		printf("Congratulations!you are eligible for vote:%d",age);
	}
	else
	{
		printf("Sorry!you are not eligible for vote:%d",age);
	}
}