#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Please input 3 sides of this triangle : ");
    scanf("%d %d %d",&a,&b,&c);
    if ((a+b > c) && (b+c > a) && (a+c > b)){
        if ((a == b) && (b == c) && (c == a)){
            printf("This is a equilateral triangle.");
        }
        else if ((a==b) || (b==c) || (a==c)){
            printf("This is a isosceles triabgle.");
        }
        else if ((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b)){
            printf("This is a right triangle.");
        }
        else {
            printf("This is a scalene triangle.");
        }
    }
    else {
        printf("All sides cannot combine into a triangle.");
    }
    return 0;
}