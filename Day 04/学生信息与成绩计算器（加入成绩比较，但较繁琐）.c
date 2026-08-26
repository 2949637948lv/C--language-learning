a#include <stdio.h>
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
	double average=total/3;
	
	printf("总成绩：%lf",total);
	printf("平均成绩：%.2lf\n",average);
				
		if(c>math){
			if(math>en){
				printf("C语言最好，英语最弱\n");
			}
			if(math==en){
				printf("C语言最好，数学和英语稍弱\n");
			}
			if(math<en){
				if(c>en){
					printf("C语言最好，数学最弱\n");
				}
				if(c==en){
					printf("C语言和英语很强，数学最弱\n");
				}
				if(c<en){
					printf("英语最好，数学最弱\n");
				}
			}
		}
		if(c<math){
			if(c>en){
				printf("数学最好，英语最弱\n");
			}
			if(c==en){
				printf("数学最好，C语言和英语稍弱\n");
			}
			if(c<en){
				if(math>en){
					printf("数学最好，C语言最弱\n");
				}
				if(math==en){
					printf("数学和英语很强，C语言最弱\n");	
				}
				if(math<en){
					printf("英语最好，C语言最弱\n");
				}
			}
		}
		if(c==math){
			if(c>en){
				printf("C语言和数学很强，英语稍弱\n");
			}
			if(c<en){
				printf("英语最好，C语言和数学稍弱\n");
			}
		}
		if(c==math&&math==en){
			printf("一点都不偏科\n");
		}
	printf("========================");
		
	
	
	
	return 0;
	
	
	
	
	
	
	
}
