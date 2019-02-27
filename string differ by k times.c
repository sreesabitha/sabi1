/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char s1[10],s2[10];
    int k,n1,i,c=0;
    scanf("%s %s %d",s1,s2,&k);
    for(i=0;s1[i]!='\0';i++)
    {
        n1++;
    }
    for(i=0;i<n1;i++)
    {
        if(s1[i]!=s2[i])
        {
            c++;
        }
    }
    if(c==k)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
  return 0;
}
