/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,a[100],c=0,i=0,j,f,rem;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        a[i]=rem;
        i++;
        c++;
        n=n/10;
    }
    for(i=0,j=i+1;i<c,j<c;i++,j++)
    {
        if(a[i]==a[j])
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
