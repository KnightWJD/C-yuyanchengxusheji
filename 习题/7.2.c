//求方程 ax^2+bx+c = 0的根
//用三个函数分别求当 b^2-4ac > 0 , =0 ,<0时的根并输出结果
//从主函数输入abc的值
#include <stdio.h>
#include <math.h>

double z1,z2;
double disc;

int main()
{
    double a,b,c;
    void Dayu0(double a,double b,double c);
    void Dengyu0(double a,double b,double c);
    void Xiaoyu0(double a,double b,double c);
    printf("请输入abc的值\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    disc = b*b-4*a*c;
    if(disc >= 0)
    {
        Dayu0(a,b,c);
        printf("%.0lfx^2+%.0lfx+%.0lf 的根为\t%lf 和 %lf\n",a,b,c,z1,z2);
    }
    else if(disc == 0)
    {
        Dengyu0(a,b,c);
        printf("%.0lfx^2+%.0lfx+%.0lf 的根为\t%lf\n",a,b,c,z1);
    }
    else
    {
        Xiaoyu0(a,b,c);
        printf("%.0lfx^2+%.0lfx+%.0lf 的根为\t%lf 和 %lf\n",a,b,c,z1,z2);
    }
    return 0;
}

void Dayu0(double a,double b,double c)
{
    z1 = (-b+sqrt(disc))/(2*a);
    z2 = (-b-sqrt(disc))/(2*a);

}

void Dengyu0(double a,double b,double c)
{
    z1 = (-b+sqrt(disc))/(2*a);
}

void Xiaoyu0(double a,double b,double c)
{
    double p,q;
    p = -b/(2*a);
    q = sqrt(-(disc))/(2*a);
    z1 = p+q;
    z2 = p-q;

}
