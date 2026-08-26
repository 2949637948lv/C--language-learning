#include <stdio.h>
int main()
{
	//初始化
	float price=0;
	float bill=0;
	
	printf("请输入您要购买的物品金额：\n");
	scanf("%f",&price);
	
	printf("您支付()元\n");
	scanf("%f",&bill);
	
	//计算并找零
	float change=price-bill;
	if(change>0){
		printf("您还需要支付%.2f元",change);
	}
	if(change==0){
		printf("正好,欢迎下次光临！");
	}
	if(change<0){
		printf("找您%.2f元，欢迎下次光临！",0-change);
	}
	return 0;
}

