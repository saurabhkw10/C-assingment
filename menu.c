#include <stdio.h>

int main(void) 
{
    int number, n1, n2;

    printf("Enter your choice:\n1. Odd/Even\n2. Major/Minor\n3. Largest number from 2 numbers\n");
    scanf("%d", &number);

    switch (number) 
	{
        case 1:
            printf("Enter a number: ");
            scanf("%d", &n1);

            if (n1 % 2 == 0) 
				{
                	printf("%d is even\n", n1);
            	} 
			else 
				{
                	printf("%d is odd\n", n1);
            	}
            break;

        case 2:
            printf("Enter age: ");
            scanf("%d", &n1);

            if (n1 >= 18) 
				{
                	printf("Major\n");
            	} 
			else 
				{
                	printf("Minor\n");
            	}
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%d %d", &n1, &n2);

            if (n1 > n2) 
				{
                	printf("%d is larger than %d\n", n1, n2);
            	} 
			else if (n2 > n1) 
				{
                	printf("%d is larger than %d\n", n2, n1);
            	} 
			else 
				{
                	printf("Numbers are equal\n");
            	}
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}