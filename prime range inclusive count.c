/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int l,r,i,j,f=0,c;
    scanf("%d %d",&l,&r);
    for(i=l;i<=r;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
        
            }
        }
    if(c==2)
    {
        f++;
    }
}
printf("%d",f);

    return 0;
}
