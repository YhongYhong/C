#include <stdio.h>
#include <string.h>
int main()
{
    char text1[10000],text2[10000];
    int result;
    printf("Enter the string to check if it is a plindrome\n");
    scanf("%[^\n]s", &text1);
        strcpy (text2,text1);
        strrev(text1);
        result = strcmp(text1,text2);
     if (result != 0){
         printf("NO");
     }
     else 
         printf("YES");
    return 0;
} 