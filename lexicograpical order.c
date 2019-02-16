/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/





#include <stdio.h>

int main()
{
    char a[100];
    int i,l=0,m=0,j,temp;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    for(i=0;i<l;i++)
    {
    for(j=i+1;j<l;j++)
    {
        if(a[i]>a[j])
        {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        }
    }
    }
     for(i=0;i<l;i++)
    {
        printf("%c",a[i]);
    }
    return 0;
}



    



