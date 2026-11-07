/*本题目要求一元二次方程

 ax^2＋bx＋c＝0的根，结果保留2位小数。（注意：0.00会在gcc下被输出为-0.00，需要做特殊处理，输出正确的0.00。）

输入格式:
输入在一行中给出3个浮点系数a、b、c，中间用空格分开。

输出格式:
根据系数情况，输出不同结果：

1)如果方程有两个不相等的实数根，则每行输出一个根，先大后小；

2)如果方程有两个不相等复数根，则每行按照格式“实部+虚部i”输出一个根，先输出虚部为正的，后输出虚部为负的；

3)如果方程只有一个根，则直接输出此根；

4)如果系数都为0，则输出"Zero Equation"；

5)如果a和b为0，c不为0，则输出"Not An Equation"。*/
#include <stdio.h>
#include <math.h>
#define EPSILON 1e-9
judge(double x);
void exchange(double *i,double *j);
int main(void)
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(judge(a)&&judge(b)&&judge(c)){
        printf("Zero Equation");
    }else if(judge(a)&&judge(b)&&!judge(c)){
        printf("Not An Equation");
    }else if(judge(a)&&!judge(b)){
        double x=-(c/b);
        if(judge(x))
            x=-x;
        printf("%.2f",x);
    }else{
        double del=b*b-4*a*c;
        if(judge(del)){
            double y=(-b)/(2*a);
            if(judge(y))
                y=-y;
            printf("%.2f",y);
        }else if(del>0){
            double res1=(-b+sqrt(del))/(2*a);
            double res2=(-b-sqrt(del))/(2*a);
            if(judge(res1))res1=-res1;
            if(judge(res2))res2=-res2;
            if(res1<res2)
                exchange(&res1,&res2);
            printf("%.2f\n",res1);
            printf("%.2f\n",res2);
        }else{
            del=-del;
            double m=(-b)/(2*a);
            double n=sqrt(del)/(2*a);
            if(judge(m))m=-m;
            if(judge(n))n=-n;
            printf("%.2f+%.2fi\n",m,n);
            printf("%.2f-%.2fi\n",m,n);
        }
    }
    return 0;
}
judge(double x){
    int res=0;
    if(fabs(x-0.0)<EPSILON){
        res=1;
    }
    return res;
}
void exchange(double *i,double *j){
    double k;
    k=*i;
    *i=*j;
    *j=k;
}
