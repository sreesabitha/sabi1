/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char a[100];
    int count=0,i;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]=='a')||(a[i]=='b'))
        {
            count++;
        }
    }
    if((count==i)||(count==i-1))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
            


    return 0;
}
