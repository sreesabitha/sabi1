/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char s1[100],s2[100];
    int i,c=0,n1=0,n2=0,u,v,w,x,y,z,j;
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
            for(j=i+1;j<n1;j++)
            {
            u=s1[i];
            v=s1[j];
            w=s2[i];
            x=s2[j];
            y=u-v;
            z=w-x;
            if(y==z)
            {
                c=1;
            }
            else
            {
                c=0;
        
            }
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
