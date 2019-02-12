/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,c,result;
	scanf("%d %d %d",&a,&b,&c);
	result=(a*b)%c;
	printf("%d",result);
	return 0;
}
