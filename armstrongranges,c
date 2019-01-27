/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c=0,rem,result=0,temp1,temp2,i;
    printf("enter n");
    scanf("%d%d",&a,&b);
    for(i=a+1;i<=b;i++)
    {
        temp1=i;
        temp2=i;
    while(temp1>0)
    {
    temp1=temp1/10;
    c++;
    }
    while(temp2>0)
    {
        rem=temp2%10;
        result=result+pow(rem,c);
        temp2=temp2/10;
    }
    if(result==i)
    {
        printf("%d",i);
    }
    result=0;
    c=0;
    }
return 0;
}

