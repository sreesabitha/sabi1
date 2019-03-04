/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char a[10],b[10];
    int i,n,j,flag=0,c=0;
    scanf("%s %s",a,b);
    for(i=0;a[i]!='\0';i++)
    {
        c++;
    }
    j=0;
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]==b[j])||(a[i]==b[j]+32)||(a[i]==b[j]-32))
        {
            flag++;
            j++;
        }
    }
    if(flag==c)
    {
    printf("yes");
    }
    else
    {
        printf("no");
    }
    

    


    return 0;
}
