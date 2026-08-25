#include <stdio.h>
#include <math.h>

int main()
{
	printf("请输入两个数，并用逗号隔开：（例如2.3，3.4）\n");
	double a,b;
	
	scanf("%lf,%lf",&a,&b);
	printf("和：%f\n",a+b);
	printf("差：%f\n",a-b);
	printf("积: %f\n",a*b);
	printf("商: %f\n",a/b);
	printf("余数：%f\n",fmod(a,b));
	
	return 0;
	
}
