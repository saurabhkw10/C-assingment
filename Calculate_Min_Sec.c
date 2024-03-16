// Write a program scan hours and convert in min and sec
#include <stdio.h>
int main()
{
     int a;
     printf("Enter Hours : ");
     scanf("%d", &a);
     printf("Min :%d \nSec : %d " ,a*60, a*60);
     return 0;
}