/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char a[100];
    scanf("%s",a);
    int i;
    for(i=3;i<5;i++)
    {
    if(a[3]=='0')
    {
        if(a[4]=='1')
        {
            printf("January");
        }
        else if(a[4]=='2')
        {
            printf("February");
        }
        else if(a[4]=='3')
        {
            printf("March");

        }
        else if(a[4]=='4')
        {
            printf("April");
            
        }
        else if(a[4]=='5')
        {
            printf("May");
            
        }
        else if(a[i]=='6')
        {
            printf("June");
            
        }
        else if(a[i]=='7')
        {
            printf("July");
            
        }
        else if(a[i]=='8')
        {
            printf("August");
            
        }
        else if(a[i]=='9')
        {
            printf("September");
            
        }
    }
    else
    {
        if(a[4]=='0')
        {
            printf("October");
            
        }
        else if(a[4]=='1')
        {
            printf("November");
            
        }
        else if(a[4]=='2')
        {
            printf("December");
            
        }
    }
    }

    return 0;
}
