# include <stdio.h>

int main()
{
    char i[100];
    char j[100];
    char k[100];

    printf("甲：大爷，楼上住的是马冬梅家吧？\n");
    printf("乙：马冬什么？\n"
            " 甲：");
    scanf("%99s",i);

    printf("乙：什么冬梅啊？\n"
            " 甲:");
    scanf("%99s",j);

    printf("乙：马什么梅啊？\n"
            "甲:行大爷，您忙去吧。。。\n"
            "乙：好嘞！\n");

    return 0;

}