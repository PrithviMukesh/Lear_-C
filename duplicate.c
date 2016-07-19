//duplicate array
#include<stdio.h>
#include<conio.h>
int main(){
	int a[20],i,j,k,n;
	printf("Enter the elements : ");
	scanf("%d",&n);
	printf("\nEnter the array : ");
	for(i=0;i<n;i++){
		printf("\nElement %d : ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nThe actual array is :   ");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	printf("\nAfter removed the duplicates : ");
	
	//duplicate removal
	
	for(i=0;i<n;i++){
		for(j = i+1;j<n;){
			if(a[j] == a[i]){
				for(k=j;k<n;k++){
					a[k] = a[k+1];
				}
				n--;
			}else{
				j++;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	
	
	
	
	return 0;
}
