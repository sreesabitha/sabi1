#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter three no");
    scanf("%d%d%d",&a,&b,&c);
    if((a>b)&&(a>c))
    {
        printf("a greater");
    }
    else if((b>c)&&(b>a))
    {
        printf("b greater");
    }
    else
    {
        printf("c greater");
    }
    return 0;
}
