#include <stdio.h>
int main()
{
    
    printf("请输入初始时间（例如12:00): \n");
    
    int hour1, minute1=0;
    int min = 0;

    scanf("%d:%d", &hour1, &minute1);

    printf("过了()分钟 \n ");
    scanf("%d", &min);

  
    int t=hour1*60 + minute1+min;

    printf("现在是%d:%d\n", t/60, t%60);

    return 0;
}
