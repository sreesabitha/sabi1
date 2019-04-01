/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[100],i,j,n,m,b[100],c=0,c1=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;b[i]!='\0';i++)
    {
        c++;
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(b[i]==a[j])
            {
                c1++;
            }
        }
    }
    if(c1==c)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }


    return 0;
}
