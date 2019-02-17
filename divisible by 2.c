/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
        int n,temp;
    scanf("%d",&temp);
    n=temp;
    while(n%2==0)
    {
        n=n/2;
    }
    printf("%d",n);

    return 0;
}
