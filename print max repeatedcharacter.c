/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char a[100],character;
    int c=0,i,j,max=1;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
    for(j=i+1;a[j]!='\0';j++)
    {
        if(a[i]==a[j])
        {
           c++ ;
        if(c>max)
        {
            max=c;
            character=a[i];
        }
    }
    }
    }
      printf("%c",character); 
    
    

    return 0;
}
