//Array Doubt assigning array to pointers
#include <stdio.h>
 
int main ()
{
  int  var[6] = {1,2,3,4,5,6},i,j;
   int *ptr=var;
   //ptr=var;
   for(i=0;i<6;i++){
   	
   printf("%d\n",*ptr+i);
  // ptr++;
}
 printf("\n\n");
   
   char *str[] = {"prithvi","mukesh","vijay","nepps","arul"};
   int x;
  
   for(x = 0;x<5;x++){
   	printf("\n");
   	printf("%s",str[x]);
}
   
   
   return 0;
}
