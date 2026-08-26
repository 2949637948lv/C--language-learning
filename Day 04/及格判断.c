#include <stdio.h>
int main()
{
	float score = 0;
	printf("请输入你的成绩：");
	scanf("%f",&score);
	
	if(score>=60)
		printf("及格\n");		
	else{
		printf("不及格\n");
	}
	return 0;
}
