/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,i;
    char sym;
    scanf("%d %c %d",&a,&sym,&b);
    if(sym=='/')
    {
        printf("%d",a/b);
    }
    else
    {
        printf("%d",a%b);
    }

    return 0;
}
