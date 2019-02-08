/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
char a[10],b[10],i,c=0,c1=0;
    scanf("%s%s",&a,&b);
    for(i=0;a[i]!='\0';i++)
    {
        c++;
    }
    for(i=0;b[i]!='\0';i++)
    {
        c1++;
    }
    if(c>c1)
    {
        printf("%s",a);
    }
    else
    {
        printf("%s",b);
    } 

    return 0;
}
