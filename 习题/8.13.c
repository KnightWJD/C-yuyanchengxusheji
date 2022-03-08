//定积分

#include <stdio.h>
#include <math.h>

double cal(double(*p)(double))
{
    double dx =(1-0)/10000.0;
    double sum=0,i;
    for(i=0;i<=1;i+=dx)
    {
        sum+=p(i)*dx;
    }
    return sum;
}

int main()
{
gt_a:
    printf("请选择要使用的函数:\n1:sin   2:cos   3:exp\n");
    int n;
    double result=0;
    scanf("%d",&n);
    switch(n)
    {
    case 1: result=cal(sin);break;
    case 2: result=cal(cos);break;
    case 3: result=cal(exp);break;
    default: printf("请输入数字1-3!");goto gt_a;
    }
    printf("%lf",result);
    return 0;
}
