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
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            printf("%c",a[i]);
        }
    }
    for(i=0;i<n;i++)
    {
        if(i%3==0)
        {
    printf("%c",a[i+3]);
    }
    }
  return 0;
}


    
