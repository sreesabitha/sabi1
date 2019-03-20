/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char a[100];
    int i,j,c=0;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        c=0;
    for(j=0;a[j]!='\0';j++)
    {
            if(a[i]==a[j])
            {
            c++;
            }
        }
        if(c==1)
        {
            printf("%c ",a[i]);
        }
    }

    return 0;
}
