                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  //设圆半径r=1.5 , 圆柱高 3 , 求圆周长,圆面积,圆球表面积,圆球体积,圆柱体积
//用牛顿迭代法求下面的方程在1.5附近的根
//  2x^3-4x^2+3x-6 = 0
//牛顿迭代法公式 : Xn+1 = Xn - f(Xn)/f'(Xn)

#include <stdio.h>
#include <math.h>
int main()
{
    double x0,x1,f1,f2;
    x1 = 1.5;
    do
    {
        x0 =x1;
        f1 = 2*pow(x0,3)-4*pow(x0,2)+3*x0-6;
        f2 = 2*3*pow(x0,2)-4*2*x0+3;
        x1 = x0 - f1/f2;
    }while(fabs(x1-x0)>=1e-5);

    printf("%lf\n",x1);

    return 0;

}
