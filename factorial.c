#include<stdio.h>
int main()
{
    int a=1;
    int i;
    int n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=a*i;
    }
    printf("%d",a);
}
