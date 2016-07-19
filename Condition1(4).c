//if condition
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("\nEnter a and b and c : ");
	scanf("%d%d%d",&a,&b,&c);
	printf("%d\t%d\t%d\n",a,b,c);
	printf("Finding the Highest value\n");
	if(a>b){
		if(a>c){
			printf("a = %d is the biggest",a);
			
		}else{
			printf("c = %d is the biggest",c);
		}
		
	}
	else{
	if(b>c){
		printf("b = %d is the biggest",b);
	}else{
		printf("c = %d is the biggest",c);
	}
}
	return 0;
}
