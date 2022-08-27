#include <stdio.h>
void introduce(char *name,int age);
int main()
{
    introduce("Prom",12);
    introduce("V", 15);
    introduce("A", -19);
    return 0;
}
void introduce(char *name,int age)
{
    if (age < 0 )
    return;
    printf("My name is %s.Im %d years old.\n", name, age);
} 