/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char s1[100],s2[100];
    int l1=0,l2=0,p,i;
    scanf("%s %s",s1,s2);
    for(i=0;s1[i]!='\0';i++)
    {
        l1++;
    }
    for(i=0;s2[i]!='\0';i++)
    {
        l2++;
    }
    if(l1<l2)
    {
        p=l1;
    }
    else
    {
        p=l2;
    }
    for(i=0;i<p;i++)
    {
        printf("%c",s1[i]);
    }
    for(i=0;i<p;i++)
    {
        printf("%c",s2[i]);
    }

    return 0;
}
