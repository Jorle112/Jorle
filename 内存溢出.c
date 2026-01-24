#include<stdio.h>
#include<string.h>
#include<io.h>
#include<fcntl.h>

int main(){
	_setmode(_fileno(stdout), _O_U8TEXT);
	
	volatile int password=0;
	char input[8];
	
	printf("密码破解前状态：%d(0表示关闭)\n",password);
	printf("请输入密码：");
	scanf("%s",input);
	
	printf("输入的内容：%s\n",input);
	printf("密码破解后的状态：%d\n",password);
	
    if(password!=0){
    	printf("成功破解\n");
	}else{
		printf("破解失败\n");
	}
	
	return 0;
} 
