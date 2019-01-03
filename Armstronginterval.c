#include <stdio.h>
int main(void) 
{
int a,remainder,sum=0;
a=350;
while(a<=450)
{
remainder=a%10;
sum=sum+(remainder*remainder*remainder);
a=a/10;
if(n==sum)
printf("\n %d is an Armstrong number",a);
else
printf("\n %d is not an Armstrong number",a);
}
a++;
return 0;
}
