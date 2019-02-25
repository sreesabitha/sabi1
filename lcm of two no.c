/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{ 
    int n,l,num,den,lcm,rem,gcd;
    scanf("%d %d",&n,&l);
    if(n>l)
    {
      num=n;
      den=l;
    }
    else
    {
        num=l;
        den=n;
    }
    rem=num%den;
    while(rem)
    {
        num=den;
        den=rem;
        rem=num%den;
    }
    gcd=den;
    lcm=(n*l)/gcd;
printf("%d",lcm);
    return 0;
    
}
