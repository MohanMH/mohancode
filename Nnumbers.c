#include<stdio.h>
int main()
{
    int a=1;
    int i,n,sum;
    scanf("%d",&n);
    for(i=1;i<6;i++)
    {   sum=n*i;
        printf("%d*%d=%d",n,i,sum);
        printf("\n");
    }
}
