#include <stdio.h>

int addition(int no1, int no2)
{
	int ans=0;
	ans=no1+no2;
	return ans;
}

int main()
{
	int a=10;
	int b=20;
	int c=60;
	
	a=addition(a,b);
	
	c=addition(a,c);
	
	printf("%d",c);
	
	return 0;
}
