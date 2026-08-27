#include <stdio.h>
int main()
{
	double a,b=0;
	printf("请输入第一个数：\n");
	scanf("%lf",&a);
	
	printf("请输入第二个数:\n");
	scanf("%lf",&b);
	
	printf("=====计算器=====\n");
	printf("1.加法\n"
		   "2.减法\n"
		   "3.乘法\n" 
		   "4.除法\n");
	
	int choice = 0;
	printf("================\n");
	printf("请选择（序号）:\n");
	scanf("%d",&choice);
	
	switch(choice){
	case 1:
		printf("a+b=%.2lf",a+b);
		break;
	case 2:
		printf("a-b=%.2lf",a-b);
		break;
	case 3:
		printf("a*b=%.2lf",a*b);
		break;
	case 4:
		if(b==0){
			printf("错误\n");
		}else{
		printf("a/b=%.2lf",a/b);
		break;
		}
	default:
		printf("无效输入\n");
		break;
	}
	return 0;
	
}
