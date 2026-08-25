#include <stdio.h>
int main()
{
	printf("==========学生成绩==========\n");
	char name[100];
	int age = 0;
	
	printf("请输入姓名：");
	scanf("%99s",name);
	
	printf("请输入年龄:");
	scanf("%d",&age);
	
	double c = 0;
	double math = 0;
	double en = 0;
	
	printf("请依次输入你的成绩\n");
	printf("C语言成绩：");
	scanf("%lf",&c);
	
	printf("数学成绩：");
	scanf("%lf",&math);
	
	printf("英语成绩：");
	scanf("%lf",&en);
	
	double total=c+math+en;
	double everage=total/3;
	
	printf("总成绩：%lf",total);
	printf("平均成绩：%.2lf\n",everage);
	printf("========================");
	
	return 0;
	
	
	
	
	
	
	
}
