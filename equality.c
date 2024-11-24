#include<stdio.h>
int main()
{   int a,b,c;

	printf("enter the value of a\n");
	scanf("%d",&a);
	printf("enter the value of b\n");
	scanf("%d",&b);
	printf("enter the value of c\n");
	scanf("%d",&c);
	
	if(a==b==c)
	{
		printf("all three numbers are equal\n");
	}
	else
	{
		printf("all three numbers are not equal\n");
	}
	return 0;
}
	
