#include<stdio.h>
int main()
{
	int num;
	printf("我心中想了一个数，0-10，猜猜是多少");
	
	
	while(num!=3)
	{
		printf("请输入你的猜测");
		scanf("%d",&num);
		
		if(num!=3)
		{
		printf("再试一遍！");
		}
		}
		 
	
	printf("猜对了！");
	return 0;
}

