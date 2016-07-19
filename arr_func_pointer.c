//array pointer function
#include<stdio.h>
int getavg(int *arr, int size);
int main(){
	int bal[5] = {100,200,300,400,500};
	printf("the average is :");
	int ptr;
	ptr = getavg(bal, 5);
	printf("%d",ptr);
	return 0;
}
int getavg(int *arr, int size)
{
	int i,sum = 0,avg = 0;
	for(i=0;i<size;i++){
		sum += arr[i];
	}
	avg = (double)sum/size;
	return avg;
}
