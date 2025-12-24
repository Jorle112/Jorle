#include<stdio.h>

int main()
{
	int score;
	scanf("%d",&score);
	
	if(score>=90)
	{
	    printf("太棒了！");	
	} 
	else if(score>=60)
	{
		printf("可以的！");
	}
	else
	{
		printf("别灰心！");
	 
	}
	return 0; 
 } 
