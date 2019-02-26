#include <stdio.h>

int main()
{
    int i,n;
    char a[100];
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    { 
        n++;
    }
    for(i=0;i<n;i++)
    {
        a[i]=a[i]+3;
        if(a[i]=='X')
        {
            a[i]='A';
        }
        if(a[i]=='Y')
        {
            a[i]='B';
        }
        if(a[i]=='Z')
        {
            a[i]='C';
        }
    }
    printf("%s",a);

    return 0;
}
