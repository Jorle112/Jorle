#include<stdio.h>
#include<string.h>
struct student{
	int id;
	char name[20];
	float score;
}; 
int main(){
	struct student stu1;
	stu1.id=1212;
	strcpy(stu1.name,"Jorle");
	stu1.score=96.5;
	
	struct student *p;
	p=&stu1;
	
	printf("--两种写法--\n");
	printf("\n%s的分数是%.1f\n",stu1.name,stu1.score);
	printf("\n%s的分数是%.1f\n",p->name,p->score);
	
	return 0;
}
 
