/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,m,p,i,flag=0;
    scanf("%d %d",&n,&m);
    p=n*m;
    for(i=1;i<=p/2;i++)
    {
        if(i*i==p)
        {
            flag=1;
            break;
        }
    }
        if(flag==1)
        {
       printf("perfect square");
        }
        else
        {
            printf("not");
        }
    
    

    return 0;
}
