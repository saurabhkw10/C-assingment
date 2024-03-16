#include <stdio.h>

int main(void) 
{
    int input;

    printf("Enter a number between 0 to 9:");
    scanf("%d", &input);

    if (input == 0) 
		{
        	printf("Zero");
    	} 
	else if (input == 1) 
		{

        	printf("One");
    	} 
	else if (input == 2) 
		{
        	printf("Two");
    	} 
	else if (input == 3) 
		{
        	printf("Three");
    	} 
	else if (input == 4) 
		{
        	printf("Four");
    	} 
	else if (input == 5) 
		{
        	printf("Five");
    	} 
	else if (input == 6) 
		{
        	printf("Six");
    	} 
	else if (input == 7) 
		{
        	printf("Seven");
    	} 
	else if (input == 8) 
		{
        	printf("Eight");
    	} 
	else if (input == 9) 
		{
        	printf("Nine");
    	} 
	else 
		{
      	  printf("Entered numbere is not between 0-9");
    	}

    return 0;
}