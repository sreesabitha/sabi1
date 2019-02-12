/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int p,t,r,floorvalue;
	scanf("%d %d %d",&p,&t,&r);
	floorvalue=(p*t*r)/100;
	printf("%d",floorvalue);
	return 0;
}
