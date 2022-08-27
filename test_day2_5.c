#include <stdio.h>
int main()
{
    int a,b;
    char c;
    printf("Enter Expression : ");
    scanf("%d %c %d", &a, &c ,&b);
    switch (c)
    {
        case '+':
            printf("Your result : %d", a+b);
            break;
        case '-':
            printf("Your result : %d", a-b);
            break;
        case '*':
            printf("Your result : %d", a*b);
            break;
        case '/':
            printf("Your result : %d", a/b);
            break;
        default :
            printf("ERROR!!!");
    }
    return 0;
}