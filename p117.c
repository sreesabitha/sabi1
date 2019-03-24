/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char s1[100],a[100];
    int l1=0,i,k=0;
    scanf("%s",s1);
    for(i=0;s1[i]!='\0';i++)
    {
        l1++;
    }
    for(i=l1-1;i>=0;i--)
    {
        a[k]=s1[i];
        k++;
    }
    for(i=0;i<l1;i++)
    {
        printf("%c",a[i]);
        if(i==l1-1)
        {
            break;
        }
        printf("-");
        
        
    }

    return 0;
}
