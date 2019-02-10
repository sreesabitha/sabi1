/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char s[10];
    int i,c=0,count=0;
    printf("enter string");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        c++;
    }
    for(i=0;i<c;i++)
    {
        if(s[i]=='0'||s[i]=='1')
        {
            count=1;
        }
        else
        {
            count=0;
            break;
        }
    }
        if(count==1)
        {
            printf("yes");
    
        }
        else
        {
            printf("no");
        }
    return 0;
}
