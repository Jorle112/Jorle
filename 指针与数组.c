#include<stdio.h>
int main(){
	int a[5]={10,20,30,40,50};
	int i;
	
	for(int i=0;i<5;i++){
		
		printf("数组写法a[%d]=%d\n",i,a[i]);
		
		printf("指针写法*(a+%d)=%d\n",i,*(a+i));
		
		printf("\n");
		 
	}
	return 0;
} 
