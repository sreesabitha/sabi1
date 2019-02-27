/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int l,r,i,j,c=0;
    scanf("%d %d",&l,&r);
    for(i=l;i<=r;i++)
    {
        for(j=2;j<=r;j++)
        {
            if((j*j)==i)
            {
                c++;
            }
        }
    }
    printf("%d",c);

    return 0;
}
