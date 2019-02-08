/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{ 
    char a[10],b[10],c[10];
    int i,j,k;
    printf("enter two strings");
    scanf("%s%s",&a,&b);
    for(i=0;a[i]!='\0';i++)
    {
        c[i]=a[i];
    } 
    j=0;
    for(k=i;b[j]!='\0';k++)
    {
        c[k]=b[j];
        j++;
    }
printf("%s",c);
    return 0;
}
