#include <stdio.h>
int main()
{
	int key = 0;
	printf("请输入密码：\n");
	scanf("%d",&key);
	
	while(key!=2048){
		printf("密码错误，请重新输入：\n");
		scanf("%d",&key);
	}
	printf("密码正确！\n");
	return 0;
}
