/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char a[100];
    int i,n=0,l=0; 
    printf("enter string");
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=48&&a[i]<=57||a[i]>=65&&a[i]<=90||a[i]>=97&&a[i]<=122)
        {
            n++;
        }
        else
        {
            l++;
        }
    }
    printf("%d",l); 

    return 0;
}
