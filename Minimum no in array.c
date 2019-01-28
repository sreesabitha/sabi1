/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[10],c=0,n,i;
    printf("enter n");
    scanf("%d",&n);
    
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
c=a[0];
for(i=1;i<n;i++)
{
    if(c >a[i])
    {
        c=a[i];
    }
}
printf("%d",c);
    return 0;
}
