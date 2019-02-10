/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    printf("enter no from 1 to 10");
    scanf("%d",&n);
    switch(n)
    { 
        case 1:
        printf("one");
        break;
        case 2:
        printf("two");
        break;
        case 3:
        printf("three");
        break;
        case 4:
        printf("four");
        break;
        case 5:
        printf("five");
        break;
        case 6:
        printf("six");
        break;
        case 7:
        printf("seven");
        break;
        case 8:
        printf("eight");
        break;
        case 9:
        printf("nine");
        break;
        case 10:
        printf("ten");
        break;
        default:
        printf("invalid");
    }

    return 0;
}
