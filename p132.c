/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char a[100];
    int c=0,c1=0,p=0,i;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]%2==0)
        {
            c++;
        }
        else
        {
            c1++;
        }
    }
    if(c>0&&c1>0)
    {
        p=c*c1;
    }
        printf("%d",p);
    return 0;
}
