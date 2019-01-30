/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{ 
    int a[10],i,c; 
    printf("enter number");
    for(i=1;i<10;i++)
    {
        scanf("%d",&a[i]);
    } 
    c=a[1];
    for(i=1;i<10;i++)
{
    if(c<a[i])
    {
        c=a[i];
    }
}
printf("%d",c);

    return 0;
}
