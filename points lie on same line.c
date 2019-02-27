/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char a[2],b[2],c[2];
    scanf(" %[^\n]s",a);
    scanf(" %[^\n]s",b);
    scanf(" %[^\n]s",c);
    if((a[0]=b[0]=c[0])||(a[1]=b[1]=c[1]))
    {
        printf("yes");
    }
    else if((a[0]=a[1])&&(b[0]=b[1])&&(c[0]=c[1]))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
