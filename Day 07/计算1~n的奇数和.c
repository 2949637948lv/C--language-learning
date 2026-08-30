#include <stdio.h>
int main()
{
	int n=0;
	int sum=0;
	printf("请输入n值:\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i%2!=0){
			printf("%d+",i);
			sum+=i;
		}
	}
	printf("0=\n");
	printf("%d",sum);
	return 0;
}
