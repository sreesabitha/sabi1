/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char a,b;
    scanf("%c %c",&a,&b);
    if((a=='P' && b=='R')||(a=='R' && b=='P'))
    {
        printf("P");
    }
     else if((a=='P' && b=='S')||(a=='S' && b=='P'))
    {
        printf("S");
    }
    else if((a=='S'&& b=='R')||(a=='R' && b=='S'))
    {
      printf("R");  
    }
    else if(a==b)
    {
        printf("D");
    }


    return 0;
}
