#include <stdio.h>
int main()
{
	int n=0;//总人数
	float score=0;//得分
	int great=0;//优秀人数
	float sum=0.0;//总分
	float max=0.0;
	float min=0.0;
	int a=0;//及格人数
	int b=0;//不及格人数
	int i;
	
	//100分制成绩
	
	printf("请输入班级总人数:\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;){
		printf("第%d个学生成绩:\n",i);
		scanf("%f",&score);
			if(0<=score&&score<=100){
		sum+=score;
		if(i==1){
			max=score;
			min=score;
		}else if(score>max){
			max=score;
		}
				i++;
		if(score<min){
			min=score;
		}
		if(score>=90){
			great++;
			a++;
		}else if(score>=60){
			a++;
		}else{
			b++;
		}
		}else{
			printf("成绩无效！请重新输入！\n");
		}
	}
	if(n>0){
	printf("总人数：%d\n",n);
	printf("总分:%.2f\n",sum);
	printf("平均分：%.2f\n",sum/n);
	printf("最高分：%.2f\n",max);
	printf("最低分：%.2f\n",min);
	printf("及格人数：%d\n",a);
	printf("不及格人数:%d\n",b);
	printf("优秀人数：%d\n",great);	
	}else {
		printf("人数不能为0！\n");
	}
	
	return 0;
}
