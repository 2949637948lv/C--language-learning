#include <stdio.h>

int main()
{
	printf("请输入三个整数，并用逗号隔开（例如a，b，c),我将计算a+b*c:\n");
	int a=0;
	int b=0;
	int c=0;
	
	scanf("%d,%d,%d",&a,&b,&c);
	printf("%d+%d*%d结果为%d",a,b,c,a+b*c);
	
	return 0;
	
	
}
