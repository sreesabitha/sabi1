#include <stdio.h>

int main()
{
    char a[10];
    int i,c=0;
    printf("enter string");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        c++;
    }
    a[c]='.';
    printf("%s",a);

    return 0;
}
