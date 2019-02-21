/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[1000],i,j,t,limit;
	scanf("%d",&limit);
	for(i=0;i<limit;i++)
	scanf("%d",&a[i]);
	for(i=0;i<limit;i++)
	{
		for(j=0;j<limit;j++)
		{
			if(a[i]<a[j])
			{
				t=a[j];
				a[j]=a[i];
				a[i]=t;
			 }
			
		}
	}
	for(i=0;i<limit;i++)
	{
	printf("%d ",a[i]);
}
    return 0;
}
