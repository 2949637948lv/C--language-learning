#include <stdio.h>
int main()
{
	int num = 0;
	
	printf("请输入一个整数:\n");
	scanf("%d",&num);
	
	int i=num%2;
	
	if(i>0){
		printf("奇数");
	}
	
	else{
		printf("偶数");
	}
	return 0;
}
