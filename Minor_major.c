//Write a program scan age and print person is minor.
#include <stdio.h>

int main() 
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 18) 
		{
        	printf("You are a minor.\n");
    	} 
	else 
		{
        	printf("You are not a minor.\n");
    	}

    return 0;
}