/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int s[100];
    int i,c=0,n,k;
    printf("enter number");
    scanf("%d%d",&n,&k);
    for(i=0;s[i]!='\0';i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==k)
        {
            c++;
        }
    }
printf("%d",c);
    return 0;
}
