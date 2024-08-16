#include<stdio.h>
int main(void)
{
    char str[20];
    printf("Enter text;");
    gets(str);
    //scanf("",&str);
    printf("Output: %s\n", str);
    return (0);
}