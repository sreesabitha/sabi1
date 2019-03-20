/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char s1[100],s2[100];
    int i,c,n1=0,n2=0;
    scanf("%s %s",s1,s2);
    for(i=0;s1[i]!='\0';i++)
    {
        n1++;
    }
    for(i=0;s2[i]!='\0';i++)
    {
        n2++;
    }
    if(n1==n2)
    {
        for(i=0;i<n1;i++)
        {
            if(s1[i]==s2[i])
            {
                c=0;
            }
            else
            {
                c=c+1;
            }
        }
    if(c==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    }
    else
    {
        printf("no");
    }
    return 0;
}
