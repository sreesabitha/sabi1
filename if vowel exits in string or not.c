/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,flag=0;
    char a[10],b[10];
    printf("enter string");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u'))
    {
        flag=1;
    }
    }
    if(flag==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    

    return 0;
}
