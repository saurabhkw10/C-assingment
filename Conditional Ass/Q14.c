#include <stdio.h>
int main() 
{
    int side1, side2, side3;
    printf("Enter sides of triangle: \n");
    scanf("%d%d%d", &side1, &side2, &side3);
    if(side1==side2 && side2==side3)
        printf("The Given Triangle is equilateral\n");
    else if(side1 == side2 || side2 == side3 || side3 == side1)
        printf("The given Triangle is isosceles\n");
    else
        printf("The triangle is not valid\n");
}