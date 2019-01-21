#include <stdio.h>

int main()
{
    int yr;
    printf("enter yr");
    scanf("%d",&yr);
    if(((yr%4==0)&&(yr%100!=0))||(yr%400==0))
    {
        printf("leap yr");
    }
    else
    {
        printf("not");
    }
        
        return 0;
}
