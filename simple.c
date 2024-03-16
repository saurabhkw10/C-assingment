//Write a program scan one number and update that number with orignal value plus half value of orignal value (use single variable) a=100 a=150
#include <stdio.h>

int main() 
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    a = a + a / 2; 							// update the value of a

    printf("Updated value of a: %d\n", a);

    return 0;
}