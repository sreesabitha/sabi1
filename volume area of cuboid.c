/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int l,b,h,sa,vol;
   scanf("%d %d %d",&l,&b,&h);
   sa=(2*l*b)+(2*l*h)+(2*h*b);
   vol=l*b*h;
   printf("%d %d ",sa,vol);

    return 0;
}
