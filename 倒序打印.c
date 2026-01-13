#include<stdio.h>
int main(){
	int a[5];
	int i;
	printf("请输入5个数字\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	printf("倒序打印出来是："); 
	for(i=4;i>=0;i--){
		printf("%d",a[i]);
	}
	return 0;
} 
