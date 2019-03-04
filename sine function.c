/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<math.h>
int main()
{
    int n;
    float res;
    scanf("%d",&n);
    res=sin(n*3.14/180);
    printf("%.1f",res);
    
    

    return 0;
}
