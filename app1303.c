#include<stdio.h>
#include<string.h>
int main()
{
    char str[80] = "";
    int i;
    printf("Enter a string: ");
    gets(str);

    int resul = strlen(str);
    printf("Land of str;%d\n", resul);

    for (i = 0; i <= resul; i++);
    {
        printf("str [%d] = %c\n", i, str[i]);
    }
    return 0;
}