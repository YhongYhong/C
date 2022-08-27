#include<stdio.h>
int main(){
    float w,h,B;
    scanf("%f %f", &w,&h);
    while ((w<=0)||(h<=0)){
        scanf("%f %f", &w,&h);
    }
    B = w/(h*h);
    printf("%.2f", B);
}