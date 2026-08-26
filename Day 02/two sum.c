#include <windows.h>

int main()
{
	int i = 0;
	int j = 0;
	
	printf("请输入第一个数字：");
	scanf("%d",&i);
	
	printf("请输入第二个数字：");
	scanf("%d",&j);
	
	printf("他们之和为%d",i+j);
	
	return 0;
}
