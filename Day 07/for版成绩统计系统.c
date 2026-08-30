#include <stdio.h>
int main()
{
	int p=1;//成绩数量
	float score=0;
	float sum=0;
	int a=0;//及格人数
	float max=0;
	float min=0;
	printf("请输入你的第1科成绩:\n");
	scanf("%f",&score);
	max=score;
	min=score;
	sum+=score;
	if(score>=60){
		a++;
	}
	
	for(p=2;p<=6;p++){
		printf("请输入你的第%d科成绩:\n",p);
		scanf("%f",&score);
		
		sum+=score;
		if(score>=60){
			a++;
		}
		if(score>max){
			max=score;
		}
		if(score<min){
			min=score;
		}
	}
	printf("max=%.2f\n",max);
	printf("min=%.2f\n",min);
	printf("及格数为%d\n",a);
	printf("总分：%.2f\n",sum);
	printf("平均分为%.2f\n",sum/6);
}
