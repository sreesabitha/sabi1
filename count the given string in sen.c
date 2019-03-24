/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char a[100],b[100];
    int i,j,c=0,f=0,n=0,m=0;
    scanf("%[^\n]s",a);
    scanf("%s",b);
    for(i=0;a[i]!='\0';i++)
    {
        n++;
    }
    for(j=0;b[j]!='\0';j++)
    {
        m++;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==b[0])
        {
            for(j=0;j<m;j++)
            {
                if(a[i+j]==b[j])
                {
                    f=1;
                }
                else
                {
                    f=0;
                    break;
                }
            }
            if(f==1)
            {
                c++;
            }
        }
    }
        printf("%d",c);

    return 0;
}
