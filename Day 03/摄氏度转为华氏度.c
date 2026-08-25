#include <stdio.h>

int main()
{
	printf("请输入摄氏温度：\n");
	float t=0;
	
	scanf("%f",&t);
	printf("对应华氏度%.2f\n",t*9.0/5+32);
	
	return 0;
	
}
