#include <stdio.h>

int main(){
    int num1,i=(num1-1),j;
    scanf("%d", &num1);
    if (num1 >= 2){
        while (num1 > 0){
            while (i < num1){
                printf("#");
                i++;
            }
        num1--;
        }
    }
    else {
        printf("ERROR!");
    }
return 0;
}