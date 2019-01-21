#include <stdio.h>

int main()
{
    char n;
    printf("enter n");
    scanf("%c",&n);
    if(((n>='a')&&(n<='z'))||((n>='A')&&(n<='Z')))
    {
        printf("alphabet");
    }
    else
    {
        printf("not");
    }

    return 0;
}
