/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/





#include <stdio.h>

int main()
{
    char a[100],b[100];
    int i,l=0,j,temp;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
     if(a[i]>=48&&a[i]<=57)
        {
        b[l]=a[i];
        l++;
        }
    }
     for(i=0;i<l;i++)
    {
        printf("%c",b[i]);
    }
    return 0;
}



    



