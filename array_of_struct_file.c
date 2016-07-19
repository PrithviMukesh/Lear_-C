//array_of_struct_file.c
#include<stdio.h>
struct student{
	char name[30];
	int height;
};
int main(){
	int i;
	struct student a[10],b[10];
	printf("Enter student details : ");
	FILE *fptr = fopen("array_struct.txt","wb");
	if(fptr == NULL){
		printf("Error!");
		exit(1);
	}
	for(i=0;i<5;i++){
		printf("\nEnter name :" );
		scanf("%s",a[i].name);
		printf("\nEnter the height : ");
		scanf("%d",&a[i].height);
		
	} 
	fwrite(a, sizeof(a), 1,fptr);
	fclose(fptr);
	fptr = fopen("array_struct.txt","rb");
	fread(b,sizeof(b),1,fptr);
	for(i=0;i<5;i++){
		printf("\nStudent name : %s \n Height : %d \n",b[i].name,b[i].height);
	}
	return 0;
}
