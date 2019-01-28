/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char a;
    printf("enter character");
    scanf("%c",&a);
    if((a>=48)&&(a<=57))
    {
        printf("yes");

    }
    else
    {
    printf("no");
    }
    return 0;
}
