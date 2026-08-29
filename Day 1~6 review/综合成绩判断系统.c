#include <stdio.h>
int main()
{
	const int num =6;
	int score=0;
	int a=0;//及格数
	int b=0;//不及格数
	int great=0;//优秀数
	int c=1;//第c个成绩
	int x=0;//有效成绩数
	int sum=0;//成绩累加
	printf("请输入你的六科成绩（主科+副科）\n");
	
	do {
		printf("请输入第%d个成绩:",c);
		scanf("%d",&score);
		c++;
		if(0<=score&&score<=150){
			sum+=score;
			x++;
			if(score>=120){
			printf("优秀\n");
			great++;
			a++;
			}else if(score>=90){
				printf("及格\n");
				a++;
			}else if(score>=60){
				printf("不及格\n");
				b++;
			}else{
				printf("拉完了\n");
				b++;
			}
		}else {
			printf("成绩无效\n");
		}
	}while(c<=3);
	
	do {
		printf("请输入第%d个成绩:",c);
		scanf("%d",&score);
		c++;
		if(0<=score&&score<=100){
			sum+=score;
			x++;
			if(score>=86){
				printf("A\n");
				great++;
				a++;
			}else if(score>=60){
				printf("B\n");
				a++;
			}else{
				printf("拉完了\n");
				b++;
			}
		}else {
			printf("成绩无效\n");
		}
	}while(c<=num);
	printf("\n");
	printf("有效成绩数:%d\n",x);
	printf("优秀成绩数:%d\n",great);
	printf("及格数:%d\n",a);
	printf("不及格数:%d\n",b);
	printf("总分:%d\n",sum);
	
	if(sum>=600){
		printf("综合评价：夯！\\O/\n");
	}else if(sum>=500){
		printf("综合评价：人上人！0^0\n");		
	}else if(sum>=450){
		printf("综合评价：NPC -^-\n");
	}else if(sum>=400){
		printf("综合评价：拉完了 -_-\n");
	}else{
		printf("回家吧孩子......\n");
	}
	return 0;
	
}
