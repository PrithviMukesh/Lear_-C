//
#include<stdio.h>
struct student {
	int a;
	int b;
};
int main()
{
	struct student s1,a;
	int  n =10;
	//s1 = &a;
	
	printf("\nEnter the a : ");
	scanf("%d",&s1.a);
	
	display(&s1);
	return 0;
	
}
void display(struct student *s2)
{
	printf("\nThe value is : %d",s2->a);
	return;
}
