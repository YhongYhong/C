#include <stdio.h>

int main()
{
    char *name = "Prom";
    int age = 18;
    float gpa = 3.96;
    char grade = 'Z';
    printf("My name is %s\n", name);
    printf("I am %d\n", age);
    printf("My GPA is %.2f\n", gpa);
    printf("Grade: %c\n", grade);
    printf("Grade(int): %d", grade);
    return 0;
}