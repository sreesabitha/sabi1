/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    char a[10],k[1];
    int i,j,flag=0,c=0;
    scanf("%s %c",a,k);
    for(i=1;a[i]!='\0';i++)
    {
        c++;
    }
    j=0;
    for(i=1;i<=c;i++)
    {
        if(a[i]==k[j])
        {
            flag++;
            break;
        }
    }
    if(flag!=0)
    {
    printf("%d",i+1);
    }

    return 0;
}
