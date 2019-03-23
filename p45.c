/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int f=0,p,a,i,j,p1,a1;
    scanf("%d %d",&p,&a);
    for(i=1;i<=p/2;i++)
    {
       for(j=1;j<=p/2;j++) 
       {
           p1=2*(i+j);
           a1=i*j;
           if((p1==p)&&(a1==a))
           {
               f=1;

           }
       }
    }
    if(f==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    

    return 0;
}
