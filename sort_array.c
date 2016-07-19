//Multi dimensional large element
#include<stdio.h>
#include<conio.h>
int main(){
	int a[20];
	int n,i,j;
	printf("Enter the size of the array : ");
	scanf("%d",&n);  //n = 3  
	printf("\nEnter the elements : \nare :");
	for(i=0;i<n;i++){
		printf("\nElement %d :",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[0]<a[i]){
			a[0] = a[i];
		}
	}
	printf("\nAfter sorted : %d\n",a[0]);
	return 0;
}
