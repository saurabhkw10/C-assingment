#include <stdio.h>
void categorize_person(int height) 
{
    if (height < 140) 
	{
        printf("The person is Dwarf.\n");
    } 
	else if (height < 150) 
	{
        printf("The person is Normal.\n");
    } 
	else if (height < 180) 
	{
        printf("The person is Tall.\n");
    } 
	else 
	{
        printf("The person is Giant.\n");
    }
}
int main() 
{
    int height;
    printf("Enter height in centimeters: ");
    scanf("%d", &height);
    categorize_person(height);
}