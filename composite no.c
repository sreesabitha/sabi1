/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num,i,flag=0;

    scanf("%d",&num);

    for(i=2;i<=num/2;i++)
{
    if(num%i==0)
    {
        flag=1;
        break;
    }
}

if(flag==0)

{

printf("\n no");

}

else

{

printf("\n yes");

}

    return 0;
}
