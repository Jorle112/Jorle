#include<stdio.h>
#include<string.h>
 
int main(){
	volatile int password=0;
	char input[8];
	
	printf("密码锁当前状态：%d(0表示锁死)\n",password);
	printf("请输入密码：");
	scanf("%s",input);
	
	printf("你输入的内容：%s\n",input);
	printf("密码锁现在的状态：%d\n",password);
	
    if(password!=0){
    	printf("成功！\n");
	}else{
		printf("失败\n");
	}
	
	return 0;
} 
