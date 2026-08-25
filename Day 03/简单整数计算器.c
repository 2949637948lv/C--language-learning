#include <stdio.h>

int main()
{
	printf("请输入两个整数，并用逗号隔开：（例如3，4）\n");
	int a,b;
	
	scanf("%d,%d",&a,&b);
	printf("和：%d\n",a+b);
	printf("差：%d\n",a-b);
	printf("积: %d\n",a*b);
	printf("商: %d\n",a/b);
	printf("余数：%d\n",a%b);
	
	return 0;
	
}
