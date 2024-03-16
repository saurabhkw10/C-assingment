#include <stdio.h>
int main() 
{
    int maths, physics, chemistry;
    int total_marks, maths_physics_total;
    printf("Input the marks obtained in Physics: ");
    scanf("%d", &physics);
    printf("Input the marks obtained in Chemistry: ");
    scanf("%d", &chemistry);
    printf("Input the marks obtained in Mathematics: ");
    scanf("%d", &maths);
    total_marks = maths + physics + chemistry;
    printf("Total marks of Maths, Physics and Chemistry: %d",total_marks);
    maths_physics_total = maths + physics;
    printf("\nTotal marks of Maths and Physics: %d",maths_physics_total);
    if ((maths >= 65 && physics >= 55 && chemistry >= 50) && (total_marks >= 190 || maths_physics_total >= 140)) 
	{
        printf("\nThe candidate is eligible for admission.\n");
    } else 
	{
        printf("\nThe candidate is not eligible for admission.\n");
    }
}