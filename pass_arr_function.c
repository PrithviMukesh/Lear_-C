//passing array in function
#include<stdio.h>
#include<conio.h>
int dispaly(int a);
int main(){
	int a[] = {2,3,4,5,6};
	printf("%d\n",a[2]);
	int c = display(a[3]);
	printf("\n%d\n",c);
	display(a[3]);
	return 0;
}
int display(int a){
	printf("%d",a);
	return a;
}
