/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[100];
    int c,i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
    for(j=0;j<n;j++)
    {
        if((a[i]==a[j]) && (i!=j))
        {
           c++ ;
        }
    }
        if(c==0)
        {
    
      printf("%d",a[i]); 
        }
    }
    
    

    return 0;
}
