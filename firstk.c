#include<stdio.h>
#include<conio.h>
void main()
{
int a,n,i,sum=0;
scanf("%d%d",&n,&a);
for(i=1;i<=n;i++)
{  
sum=sum+i;
}
printf("%d",sum);
getch();
}
