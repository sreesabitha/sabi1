/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    char a[10];
    int i,n;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        n++;
    }
    printf("%d",n);
    
    

    return 0;
}
