#include<stdio.h>
void swap(int *x,int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

int main(){
	int a=10;
	int b=20;
    printf("交换前a = %d,b = %d\n",a,b);

    swap(&a,&b);
	
	printf("\n交换后a = %d,b = %d\n",a,b);
		
	return 0;
}

