#include <stdio.h>
int main() 
{
    int choice;
    float radius, side, length, breadth, base, height;
    const float PI = 3.14159265358979323846;

    while(1) {
        printf("\n-------------------------");
        printf("\n 1 --> Circle\n 2 --> Rectangle\n 3 --> Triangle\n 4 --> Square");
        printf("\n-------------------------");
        printf("\nEnter the Figure code : ");
        scanf("%d", &choice);

        switch(choice) 
		{
            case 1:
                printf("\nEnter the radius : ");
                scanf("%f", &radius);
                printf("Area of a circle = %f\n", PI * radius * radius);
                break;
            case 2:
                printf("\nEnter the breadth and length : ");
                scanf("%f%f", &breadth, &length);
                printf("Area of a Rectangle = %f\n", length * breadth);
                break;
            case 3:
                printf("\nEnter the base and height : ");
                scanf("%f%f", &base, &height);
                printf("Area of a Triangle = %f\n", 0.5 * base * height);
                break;
            case 4:
                printf("\nEnter the side : ");
                scanf("%f", &side);
                printf("Area of a Square= %f\n", side * side);
                break;
            default:
                printf("\nInvalid choice!\n");
                break;
        }
        exit(0); 
    }
}