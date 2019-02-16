/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,gcd,lcm,rem,den,num;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        num=a;
        den=b;
    }
    else
    {
        num=b;
        den=a;
    }
    rem=num%den;
    while(rem)
    {
        num=den;
        den=rem;
        rem=num%den;
    }
    gcd=den;
    lcm=(a*b)/gcd;
    printf("%d",lcm);


    return 0;
}
