/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char s1[10];
    int c1=0,i,c=0;
    scanf("%s",s1);
    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]=='(')
        {
            c++;
        }
        else if(s1[i]==')')
        {
            c1++;
        }
    }
    if(c1==c)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
  return 0;
}
