/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{ 
    int gcd,num,den,rem,n1,n2;
    scanf("%d %d",&n1,&n2);
    if(n1>n2)
    {
        num=n1;
        den=n2;
    }
    if(n1<n2)
    {
        num=n2;
        den=n1;
    }
    rem=num%den;
    while(rem)
    {
        num=den;
        den=rem;
        rem=num%den;
    }
    gcd=den;
    printf("%d",gcd);

    return 0;
}
