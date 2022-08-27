#include <stdio.h>
int main(){
    int c;
    scanf("%d", &c);
    for(int i=1;i<=c;i++){
        for(int j=1;j<=c;j++){
            if(i==1||j==1||i==c||j==c)
            printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}