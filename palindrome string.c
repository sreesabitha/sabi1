/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,count=0,j,c=0;
    char a[10],b[10];
    printf("enter string");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        count++;
    }
    j=0;
    for(i=count-1;i>=0;i--)
    {
        b[j]=a[i];
        j++;
    }
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==b[i])
        {
            c++;
        }
    }
    if(count==c)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
    

    return 0;
}
