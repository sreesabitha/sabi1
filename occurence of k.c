/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
     int n,k,c=0,rem;
    scanf("%d %d",&n,&k);
    while(n)
    {
        rem=n%10;
        n=n/10;
    if(rem==k)
    {
        c++;
    }
    }
    printf("%d",c);
  return 0;
}


    
