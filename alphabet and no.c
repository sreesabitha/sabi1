/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char s[100];
    int i,c=0,c1=0;
    printf("enter string");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
    if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z'))
    {
        c++;
    }
    else if(s[i]>='0'&&s[i]<='9')
    {
        c1++;
    }
    }
    if((c&&c1)>0)
    {
printf("yes");
}
else
{
    printf("no");
}
    return 0;
}
