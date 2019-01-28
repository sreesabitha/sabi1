/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[10],n,i,j,temp;
    printf("enter n");
    scanf("%d",&n);
    
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
    if(a[i]>a[j])
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    }
}
    printf("%d",a[n/2]);
    return 0;
}
