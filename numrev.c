#include <stdio.h>

int main()
{
    int n,temp=0,rem;
    printf("enter n");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        temp=temp*10+rem;
        n=n/10;
    }
    printf("%d",temp);

    return 0;
}
