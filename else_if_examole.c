//else if divider example
#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	printf("Enter the value for check  : ");
	scanf("%d",&a);
	if(a%5==0){
		printf("\nIt is divisible by 5");
	}
	else{
		printf("\nIt is divisible by 8");
	}
	if(a%5==0 && a%8==0){
		printf("\nIt is divided by both 5 and 8");
	}
	else{
		printf("n0ne");
	}
}
