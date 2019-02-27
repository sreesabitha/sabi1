/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char a[10],b[10];
    int c=0,i;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            
        }
        else
        {
            b[c]=a[i];
            c++;
        }
    }
    for(i=0;i<c;i++)
    {
        printf("%c",b[i]);
    }
    

    return 0;
}
