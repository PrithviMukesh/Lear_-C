//store_file_student.c
#include<stdio.h>
int main()
{
	int i,n;
	char name[30];
	int marks;
	printf("Enter the value for n : ");
	scanf("%d",&n);
	FILE *fptr ;
	fptr = fopen("D:\\summer\\Placement C prepare\\Files\\student.txt","w+");
	if(fptr == NULL){
		printf("Error opening file ~!!");
		exit(1);
	} 
	for(i=0;i<n;i++){
		printf("\nEnter student no : %d ",i+1);
		printf("\n Name : ");
		scanf("%s",&name);
		printf("\nEnter marks : ");
		scanf("%d",&marks);
		fprintf(fptr,"Name : %s \n Marks : %d \n",name,marks);
	}
	fclose(fptr);
	return 0;
		
}
