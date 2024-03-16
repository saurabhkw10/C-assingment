//Write a program scan age of person and print person is major or minor.
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
        	printf("You are a major.\n");
    	}

    return 0;
}