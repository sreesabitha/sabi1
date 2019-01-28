/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[10],i,n;
    printf("enter n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    { 
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d%d ",a[i],i);
 
    }
    return 0;
}
