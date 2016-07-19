#include<stdio.h>
#include<conio.h>
int main(){
	int a[20][20],trans[20][20],n,i,j;
	printf("Enter the size of th matrix : ");
	scanf("%d",&n);
	printf("\nEnter the elements(Row wise) : ");
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("\nEnter element %d,%d : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n The array is : \n");
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("\t%d",a[i][j]);
			if(j==n){
			printf("\n\n");}
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			trans[j][i] = a[i][j];
			}
		}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("\t%d",trans[i][j]);
			if(j==n){
			printf("\n\n");}
		}
	}
	return 0;	
}
