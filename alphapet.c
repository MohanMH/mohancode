#include <stdio.h>
#include<conio.h>
void main()
	{
  char c;
	printf("enter the character:");
	scanf("%c",&c);
	if(c >='a' && c <= 'z' || c >= 'A' && c <= 'Z')
  {
	printf("Alphapet");
  }
	else
  {
	printf("Not Alphapet");
     return 0;
     }
     getch();
}
