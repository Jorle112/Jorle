#include<stdio.h>
int main()
{
	int score;
	
	printf("请输入分数");
	
	scanf("%d",&score);
	
	if(score>=90)
	{
	printf("太棒了！"); 
	 } 
	 
	else if(score>=60)
	{
	printf("不错的！");	
	}
	
	else
	{
	printf("要加油了哦");
	}
	
	return 0;
}
