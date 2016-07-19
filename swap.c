//Swapping variables using temporary variable
#include<stdio.h>
#include<conio.h>
int main(){
	int a,b;
	printf("Enter the two variables  :");
	scanf("%d%d",&a,&b);
	printf("\n-----Before swapping ------");
	printf("The value of a and b   : %d and %d",a,b);
	int t = a;
	a = b;
	b = t;
	printf("\n====After swapping=====\n");
	printf("The value of a and b   : %d and %d",a,b);
	return 0;
}
