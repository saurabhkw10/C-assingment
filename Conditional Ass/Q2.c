#include <stdio.h>
int main(void)
{
	int no1;
	printf("enter 1 number:\n");
	scanf("%d",&no1);
	if (no1 % 2 == 0)
	{
		printf("%d is an even integer",no1);
	}
	else
	{
		printf("%d is an odd integer",no1);
	}
return 0;
}
