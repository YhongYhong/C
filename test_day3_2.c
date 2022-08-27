#include<stdio.h>
int main(){
    int num1;
    int sum=0;
    int i=1;
    scanf("%d", &num1);
    while (num1 > 0){
        sum = sum+(num1%2)*i;
        i = i*10;
        num1 /= 2;
    }
    printf("%d",sum);
}