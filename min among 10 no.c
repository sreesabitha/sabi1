/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[10],i,min;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<10;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
printf("%d",min);
    return 0;
}
