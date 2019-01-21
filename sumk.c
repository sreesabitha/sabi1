#include <stdio.h>

int main()
{
    int n,k,a[10],sum=0,i;
    printf("enter 2no");
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);

    return 0;
}
