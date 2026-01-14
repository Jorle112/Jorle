#include<stdio.h>
int main(){
	int a[5]={50,20,10,30,40};
	int i,j,temp;
	printf("50 20 10 30 40\n");
	
	for(int i=0;i<4;i++){
		
		for(int j=0;j<4-i;j++){
		
		if(a[j]>a[j+1]){
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}	
		}
		}
		printf("从小到大的结果是：\n");
		for(int i=0;i<5;i++){
			printf("%d\n",a[i]);
		}
		return 0;
	}
