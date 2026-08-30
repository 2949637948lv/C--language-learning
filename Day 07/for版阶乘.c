#include <stdio.h>
int main()
{
	int n=0;
	long long result=1ll;
	printf("请输入n值:\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		result*=i;
	}
	printf("1*...*%d=%lld",n,result);
	return 0;
}
