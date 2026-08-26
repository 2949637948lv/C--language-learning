#include <stdio.h>
int main()
{
	int age = 0;
	printf("请输入你的年龄：\n");
	scanf("%d",&age);

	if(age>=18&&age<80){
		printf("成年");
	}else{
		printf("未成年");
	}
	return 0;
	
}
