#include <stdio.h>
int main() {
	char name[100];
	int age = 0;
	float score = 0;

	printf("请输入你的姓名：\n");
	scanf("%99s", name);

	printf("请输入年龄：\n");
	scanf("%d", &age);

	printf("请输入你的C语言成绩：\n");
	scanf("%f", &score);

	if (age >= 18) {
		printf("已成年\n");
	} else {
		printf("未成年\n");
	}

	if (score >= 60) {
		if (score >= 90)
			printf("优秀\n");
		else
			printf("良好\n");

	}
	else
		printf("不及格：\n");
	return 0;

}
