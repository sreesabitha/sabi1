/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char a[100];
    int i;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a')
        {
            a[i]=a[i]-32;
        }
        else
        {
            a[i]=a[i]+32;
        }
    }
    printf("%s",a);


    return 0;
}
