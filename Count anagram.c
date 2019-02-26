/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i,j,k,r=0,v=0;
    char a[100],b[100]={'k','a','b','a','l','i'};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a);
    for(j=0;b[j]!='\0';j++)
    {
        for(k=0;a[k]!='\0';k++)
        {
            if(b[j]==a[k])
            {
                a[k]='$';
                r++;
            }
        }
    }
        if(r%6==0)
        {
            v++;
        }
    }
    
    
        printf("%d",v);
    

    return 0;
    }

