/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    char a[100];
    int c=0,i;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        c++;
        if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u'))
        {
           a[i]='\0' ;
        }
    }
    for(i=c;i>=0;i--)
    {
      printf("%c",a[i]); 
    }

    return 0;
}
