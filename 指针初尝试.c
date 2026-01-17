#include<stdio.h>
int main(){
	int a=10;
	int *p;
	p=&a;
	
	printf("--修改前--\n",a);
	printf("a为%d\n",a);
	printf("门牌号为%p\n",p);
	
	*p=999;
	
	printf("\n--修改后--\n");
	printf("a为%d",a);
	
	return 0;
	
} 
