/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char str[30];
	int n=0,i;
	printf("enter the string:");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
	    n++;
	}
	if(n%2==0)
	{
		str[n/2]='*' ;
		str[(n/2)-1]='*';
	}
	else
	{
		str[n/2]='*' ;
	}
	printf("\n%s",str);
    return 0;
}
