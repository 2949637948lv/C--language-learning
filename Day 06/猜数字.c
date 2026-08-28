#include <stdio.h>
int main()
{
	int num=0;
	const int key =100;
	
	printf("请输入一个整数：\n");
	
	while(num!=key){
		scanf("%d",&num);
		
		if(num>key){
			printf("大了,请重新输入\n");
		}else if(num<key){
			printf("小了，请重新输入\n");
		}else {
			printf("猜对了！\n");
		}
		
	}
	return 0;
}
