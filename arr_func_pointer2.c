//
#include<stdio.h>
int mukesh(int x,int y)
{
	int sum;
	return sum = x+y;
}
int main()
{
	int (*myfunction)(int,int);
	myfunction = mukesh;
	int value = mukesh(10,10);
	printf("%d",value);
	return 0;
}
