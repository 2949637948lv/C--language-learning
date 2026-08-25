#include<stdio.h>
int main()
{
	printf("请输入两个小数，并用逗号隔开(例如1.5,2.5),我将计算出两数之和:\n");
	float a=0.0;
	float b=0.0;
	
	scanf("%f,%f",&a,&b);
	printf("两数之和为%f",a+b);
	
	return 0;
}
