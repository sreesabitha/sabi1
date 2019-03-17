/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int n=0,i,res,a[20],t=0;
char b[10];
scanf("%s",b);
for(i=0;b[i]!='\0';i++)
{
    n++;
}
for(i=0;i<n;i++)
{
	if(b[i]=='I')

	a[i]=1;

	else if(b[i]=='V')

	a[i]=5;

	else if(b[i]=='X')

	a[i]=10;

	else if(b[i]=='L')

	a[i]=50;

	else if(b[i]=='C')

	a[i]=100;

	else if(b[i]=='D')

	a[i]=500;

	else

	printf("\nINVALID");
}
for(i=0;i<n;i=i+2)
{
	if(a[i]<a[i+1])
	{
		res=a[i+1]-a[i];
	}
	else 
	{
		res=a[i]+a[i+1];
	}
t=res+t;
}
printf("\n%d",t);
    return 0;
}
