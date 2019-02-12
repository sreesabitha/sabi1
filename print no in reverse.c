/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,rev=0,rem;
	scanf("%d",&n);
	while(n)
	{
	    rem=n%10;
	    rev=rev*10+rem;
	    n=n/10;
	}
	printf("%d",rev);
	return 0;
}
