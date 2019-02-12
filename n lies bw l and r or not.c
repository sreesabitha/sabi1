/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,l,r;
    scanf("%d%d%d",&n,&l,&r);
    if(n>l&&n<r)
    {
      printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
