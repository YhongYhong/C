#include <stdio.h>
int main ()
{
    int a;
    printf("Input your score : ");
    scanf("%d", &a);
    switch (a/10)
    {
        case 1:
        case 2:
        case 3:
        case 4:
            printf("Your grade is F.");
            break;
        case 5:
            printf("Your grade is D.");
            break;
        case 6:
            printf("Your grade is C.");
            break;
        case 7:
            printf("Your grade is B.");
            break;
        case 8:
        case 9:
        case 10:
            printf("Your grade is A.");
            break;
        default :
            printf("Invalid score. It must be between 0 - 100.");
    }
    return 0;
}