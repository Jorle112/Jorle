#include<stdio.h>
#include<string.h>
int main(){
	char text[]="I love you";
	char key='X';
	int i;
	int len=strlen(text);
	
	printf("--原始数据--\n");
	printf("明文:%s\n",text);
	
	for(i=0;i<len;i++){
		text[i]=text[i]^key;
	}
	printf("\n--加密之后--\n");
	printf("密文:%s\n",text);
	
	for(i=0;i<len;i++){
		text[i]=text[i]^key;
	}
	printf("\n--解密之后--\n");
	printf("还原:%s\n",text);
	
	return 0; 
} 
