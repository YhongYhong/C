#include <stdio.h>
int main()
{
    
    for(int x=1 ; x<=10000 ; x++){
        int b=0;
        for(int a=1 ; a<x ; a++){
            if(x%a==0){
                b=b+a;
            }
        }
        if(b==x){
            printf("%d ", b);
        }
        
    }
}