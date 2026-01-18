#include<stdio.h>
int main(){
	int a[5]={10,20,30,40,50};
	
	printf("--看看内存地址--\n");
	
	printf("a的地址：%p\n",a);
	
	printf("a[0]的地址&a：%p\n",&a[0]);
	
	return 0;
}
