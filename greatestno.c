#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("enter the value of a\n");
	scanf("%d",&a);
	printf("enter the value of b\n");
	scanf("%d",&b);
	printf("enter the value of c\n");
	scanf("%d",&c);
	
	if(a>b && a>c)
	{
		printf("the a is greater\n");
		
	}
	
else if(b>a && b>c)
{
	printf("the b is greater\n");
	
}
else if (c>a && c>b)
{
	printf("the c is greatest\n");
}

	return 0;
	
}
