#include <stdio.h>
int main()
{
	int i=1;
	int n=0;
	int sum=0;
	printf("请输入n值:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=i;
	}
	printf("1+...+%d=%d",n,sum);
	return 0;
}
