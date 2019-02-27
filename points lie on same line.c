/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[2],b[2],c[2],i,flag=0;
	for(i=0;i<2;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<2;i++)
	{
	scanf("%d",&b[i]);
	}
	for(i=0;i<2;i++)
	{
	scanf("%d",&c[i]);
	}

	for(i=0;i<2;i++)
	{
	if((a[i]==b[i] && b[i]==c[i])||(a[i]==a[i+1] && b[i]==b[i+1] && c[i]==c[i+1]))
	{
    flag=1;
	}
	}
	if(flag==1)
	{
	printf("yes");
	}
	else
	{
	printf("no");
	}
	return 0;
}
    
