/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    char a[100];
    int i=0,k;
    scanf("%d",&k);
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if((i+1)%k==0)
        {
        printf("%c",a[i]);
        }
    }


    return 0;
}
