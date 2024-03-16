//Write a program scan characterand print character is vowel or not
#include <stdio.h>
int main() 
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    ch = tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
	{
        printf("The character is a vowel.\n");
    } 
	else 
	{
        printf("The character is not a vowel.\n");
    }

    return 0;
}