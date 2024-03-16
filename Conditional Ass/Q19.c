#include <stdio.h>
int main() 
{
    int monthNumber;
    printf("Enter month number (1-12): ");
    scanf("%d", &monthNumber);
    int days;
    switch(monthNumber) 
	{
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            days = 28; 
            break;
        default:
            printf("Invalid month number!\n");
            return 1;
    }
    printf("Month has %d days\n", days);
}
