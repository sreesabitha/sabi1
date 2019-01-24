#include <stdio.h>

void main()
{
    char a[10],b[10];
    int n,i,j=0,c=0;
    printf("enter string");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
    c++;
    }
    for(i=c-1;i>=0;i--)
    {
        b[j]=a[i];
        j++;
    }
    printf("%s",b);
    getch();
}
