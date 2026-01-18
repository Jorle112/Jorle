#include<stdio.h>
int main(){
	int choice;
	
	printf("--今日菜单--\n");
	printf("\n1.宫保鸡丁\n");
	printf("\n2.鱼香肉丝\n");
	printf("\n3.土豆炒牛肉\n");
	printf("===============");
	printf("\n请点菜\n");
	
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
		printf("\n您的宫保鸡丁来了\n");
		break;
		case 2:
		printf("\n您的鱼香肉丝来了\n");
		break;
		case 3:
		printf("\n您的土豆炒牛肉来了\n");
		break;
		default:
		printf("\n错误输入\n");
		break;	
	} 
	return 0;
}
