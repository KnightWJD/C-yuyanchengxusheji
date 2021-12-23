//用牛顿迭代法求根 方程 ax^3+bx^2+cx+d=0
//系数 abcd的值依次为 1 2 3 4 由主函数输入
//求x在1附近的一个实根 , 求出根后有主函数输出
#include <stdio.h>
#include <math.h>
double root(int a,int b,int c,int d)
{
    double x = 1;
    double x0,f1,f2;
    do
    {
        x0 = x;
        f1 = a*pow(x0,3)+b*pow(x0,2)+c*x0+d;
        f2 = 3*a*pow(x0,2)+2*b+c;
        x = x0 - f1/f2;
    }while(fabs(x-x0) >= 1e-3);
    return x;
}

int main()
{
    int a,b,c,d;
    printf("请输入a b c d的值: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("ax^3+bx^2+cx+d=0的根为 %lf",root(a,b,c,d));
    return 0;
}

