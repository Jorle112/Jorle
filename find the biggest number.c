#include<stdio.h>
int main(){
	int a[5];
	int i;
	printf("请输入5个数字，我帮你找出最大值\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	int max=a[0];
	printf("最大值是：");
	for(i=0;i<5;i++){
		if(a[i]>=max){
			max=a[i]; 		
		}	
	}
	printf("%d",max);
    return 0;
}
