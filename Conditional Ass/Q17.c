#include <stdio.h>
int main() 
{
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("The alphabet is Vowel.");
    }
    else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("The alphabet is Consonant.");
    }
    else 
    {
        printf("The alphabet is not an alphabet.");
    }
}