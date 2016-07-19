
#include<stdio.h>
int getvalue(int *ptr);
int main(){
	int i = 10;
	getvalue(&i);
	printf("%d",i);
}
int getvalue(int *ptr){
	*ptr += 10;
	return 0;
}
