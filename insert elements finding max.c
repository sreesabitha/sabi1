/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[10],k,i=0,x,n,j=0,max=0;
    scanf("%d %d",&n,&x);
    for(i=0;i<n;i++)
    {
	    scanf("%d",&a[i]);
	}

    while(j<x)
	{
	    scanf("%d",&k);
	    a[n]=k;
	    n++;
	   for(i=0;i<n;i++)
	    {
	        if(a[i]>=max)
	        {
	            max=a[i];
	        }
	    }
	    printf("%d ",max); 
	j++; 
	}
    return 0;
}
