/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,rem,sum,p;
    scanf("%d",&n);
        rem=n%10;
        n=n/10;
        while(n>0)
        {
          p=n%10;
          n=n/10;
        }
        sum=rem+p;

    
    printf("%d",sum);

    return 0;
}
