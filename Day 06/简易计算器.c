#include <stdio.h>
int main()
{
	int a=0;
	do{
		printf("=====简易计算器=====\n");
		printf("【1】加法\n");
		printf("【2】减法\n");
		printf("【3】乘法\n");
		printf("【4】除法\n");
		printf("【0】退出\n");
		printf("\n");
	    printf("请选择：");
	    scanf("%d",&a);
	
		if(a!=0){
		double b,c=0;
		printf("请输入两个数字(中间用空格隔开）:");
		scanf("%lf %lf",&b,&c);
		
		switch(a){
		case 1:
			printf("%.2f+%.2f=%.2f\n",b,c,b+c);
			break;
		case 2:
			printf("%.2f-%.2f=%.2f\n",b,c,b-c);
			break;
		case 3:
			printf("%.2f*%.2f=%.2f\n",b,c,b*c);
			break;
		case 4:
			if(c!=0){
			printf("%.2f/%.2f=%.2f\n",b,c,b/c);
			}else{
				printf("除数不能为0！\n");
			}
			break;
		case 0:
			break;
		default :
			printf("输入错误，请重新输入\n");
			break;
		}
	}
	}while(a!=0);
		printf("感谢您的使用！\n");
		return 0;
}
