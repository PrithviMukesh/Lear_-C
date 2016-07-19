//test structures
#include<stdio.h>
typedef struct employee{
	char name[20];
	int age;
}emp;
int main()
{
	emp e1,e2;
	typedef int i;
	i  r,j,k;
	printf("\nEnter the name : ");
	gets(e1.name);
	puts(e1.name);
	printf("\nEnter age : ");
	scanf("%d",&e1.age);
	return 0;
}
