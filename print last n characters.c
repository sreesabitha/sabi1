/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,p,l=0,i;
    char a[100];
    scanf("%d",&n);
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    p=l-n;
    for(i=p;i<l;i++)
    {
        printf("%c",a[i]);
    }

    return 0;
}
