// write a progam scan year and convert in days and month
#include <stdio.h>
int main()
{
     int year;
     printf("Enter Year : ");
     scanf("%d", &year);
     printf("Month : %d \nDays  : %d" ,year*12, year*365);
     return 0;
}