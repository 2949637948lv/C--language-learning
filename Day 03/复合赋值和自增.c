#include <stdio.h>
int main()
{
	int a=10;
	a+=2;
	printf("%d\n",a);
	
	a-=3;
	printf("%d\n",a);
	
	a*=4;
	printf("%d\n",a);
	
	a/=6;
	printf("%d\n",a);
	
	int b=a++;
	printf("%d,%d\n",a,b);
	
	int c=++a;
	printf("%d,%d\n",a,c);
	
	printf("预测输出:\n12\n9\n36\n6\n7,6\n8,8");
	
	return 0;
}
