#include <stdio.h>

int main() 
{
    int rollno, physics, chemistry, comp, total;
    char name[50];
    float percentage;

    printf("Enter roll number: ");
    scanf("%d", &rollno);

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter marks in physics: ");
    scanf("%d", &physics);

    printf("Enter marks in chemistry: ");
    scanf("%d", &chemistry);

    printf("Enter marks in math: ");
    scanf("%d", &comp);

    total = physics + chemistry + comp;
    percentage = (total / 300.0) * 100;

    printf("\nMarksheet\n");
    printf("Roll No: %d\n", rollno);
    printf("Name of Student: %s\n", name);
    printf("Marks in Physics: %d\n", physics);
    printf("Marks in Chemistry: %d\n", chemistry);
    printf("Marks in Computer Application: %d\n", comp);
    printf("Total: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 80) 
		{
       		printf("Division = First\n");
    	} 
	else if (percentage >= 40) 
		{
        	printf("Division = Pass\n");
    	} 
	else 
		{
        	printf("Division = Fail\n");
    	}
}