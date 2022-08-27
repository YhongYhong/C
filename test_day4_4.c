#include <stdio.h>

int main()
{
    int r,c;
    printf("how many rows? : ");
    scanf("%d", &r);
    printf("how many columns? : ");
    scanf("%d", &c);
    int p[r][c];
    for (int i = 0 ; i < r ; i++)
    {
        for (int j = 0; j < c ; j++)
        {
            printf("Enter index [%d][%d] : ", i, j);
            scanf("%d", &p[i][j]);
        }
    }
    for (int i = 0 ; i < r ; i++)
    {
        for (int j = 0; j < c ; j++)
        {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }

    return 0;
} 