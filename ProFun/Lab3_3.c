#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for(int t=1 ; t<=a-1 ; t++){
        for(int n=0 ; n<t ; n++){
            printf(" * ");
        }
        for(int b=0 ; b<(a*2)-1-(t*2) ; b++){
            printf("   ");
        }
        for(int n=0 ; n<t ; n++){
            printf(" * ");
        }
        printf("\n");
    }
    for(int n=0 ; n<(a*2)-1 ; n++){
        printf(" * ");
    }
    printf("\n");
    for(int t=a-1 ; t>=0 ; t--){
        for(int n=0 ; n<t ; n++){
            printf(" * ");
        }
        for(int b=0 ; b<(a*2)-1-(t*2) ; b++){
            printf("   ");
        }
        for(int n=0 ; n<t ; n++){
            printf(" * ");
        }
        printf("\n");
    }
}