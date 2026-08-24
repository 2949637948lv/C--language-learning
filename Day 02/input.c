#include <stdio.h>

int main()
{   
	system("chcp 65001");
	char i[100];
	int j = 0; 
	
	printf("请输入你的名称:\n");
	scanf("%99s",i);
	
	printf("请输入你的年龄:\n"); 
	scanf("%d",&j);
	
    printf("好久不见%s！\n",i);
    printf("原来你已经%d岁了！\n",j);
	
	return 0;
	
}

