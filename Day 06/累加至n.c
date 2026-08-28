#include <stdio.h>
int main()
{
	int a = 1;
	int n = 0;
	int sum = 0;
	
	printf("请输入一个正整数n，将从1累加至n:\n");
	scanf("%d",&n);
	while(a<=n){
	    sum=sum+a;
		a++;
	}
		printf("1+...+%d=%d\n",n,sum);
	return 0;
}
