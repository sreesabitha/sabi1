/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      if(n%i==0)
      {
        x=n/i;
      if(x%2==1)
      {
          printf("%d",i);
          break;
      }
    }
    }
    
    

    return 0;
}
