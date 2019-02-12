/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,rem,product=1;
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		product=product*rem;
		n=n/10;
	}
	printf("\n%d",product);
	return 0;

    return 0;
}
