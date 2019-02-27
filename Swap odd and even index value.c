/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char a[100];
    int i,c=0,t;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        c++;
    }
    for(i=0;i<c;i++)
    {
        if(i%2!=0)
        {
            t=a[i];
            a[i]=a[i-1];
            a[i-1]=t;
        }
    }
    printf("%s",a); 
    
            

    return 0;
}
