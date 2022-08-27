#include <stdio.h>
int main()
{
    int x,y,a;
    scanf("%d", &a);
    for(x=0 ; x<a ; x++){    
        for(y=0 ; y<a ; y++){
            if((x==0) || (x==(a-1)) || (y==0) || (y==(a-1))){  
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}