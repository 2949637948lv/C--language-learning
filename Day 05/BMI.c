#include <stdio.h>
int main()
{
	double height=0;
	double weight=0;
	printf("请输入你的身高（米）:\n");
	scanf("%lf",&height);
	
	printf("请输入你的体重（千克）:\n");
	scanf("%lf",&weight);
	
	double BMI=weight/(height*height);
	printf("BMI=%.2lf\n",BMI);
	
	if(BMI<18.5){
		printf("偏低\n");
	}else if(BMI<24.9){
		printf("正常\n");
	}else if(BMI<29.9){
		printf("偏高\n");
	}else{
		printf("肥胖\n");
	}
	return 0;
}
