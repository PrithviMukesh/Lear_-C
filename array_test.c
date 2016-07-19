#include <stdio.h>
int main(){
  int i,sum=0;
  int* class[10];
  printf("Enter 6 numbers:\n");
  for(i=0;i<6;++i){
      scanf("%d",&class[i]); // (class+i) is equivalent to &class[i]
      sum += class[i] ;// *(class+i) is equivalent to class[i]
  }
  printf("Sum=%d",sum);
  return 0;
}
