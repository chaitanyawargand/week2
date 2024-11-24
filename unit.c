#include<stdio.h>
int main()
{
	int unit,sur,charge;
	
	sur=50;
	charge=10;
	
	scanf("%d",&unit);  
	printf("enter the unit\n");

	
	printf("your electricity bill is %d\n",unit*charge+sur);
	
	return 0;
}
