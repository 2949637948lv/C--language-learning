#include <stdio.h>
int main()
{
	char name[100];
	int age = 0;
	int score = 0;
	
	printf("请输入你的姓名：\n");
	scanf("%99s", name);
	
	printf("请输入年龄：\n");
	scanf("%d", &age);
	
	printf("请输入你的C语言成绩(去除小数点）：\n");
	scanf("%d", &score);
	
	score/=10;
	switch(score){
	case 10:
	case 9:
		printf("优秀\n");
		break;
		
	case 8:
	case 7:
	case 6:
		printf("良好\n");
		break;
		
	default:
		printf("不及格\n");
		break;
		
		return 0;
		
	}
}
