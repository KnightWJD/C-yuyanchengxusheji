                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  //设圆半径r=1.5 , 圆柱高 3 , 求圆周长,圆面积,圆球表面积,圆球体积,圆柱体积
//使用迭代法求   x = 根号下a
//迭代公式为  Xn+1 = 1/2(Xn + a/Xn)
//要求前后两次求出的x的差绝对值小于1/(10∧5)

#include <stdio.h>
#include <math.h>
int main()
{
    double a , x0,x1;

    printf("请输入a的值\n");
    scanf("%lf",&a);
    x0 = 2/a;
    x1 =(x0+ a/x0)/2;
    while((fabs(x1-x0))>=(1/pow(10.0,5)))
        {
           x0 = x1 ;
           x1 =(x0+ a/x0)/2;
        }

    printf("根号a= %lf",x1);
    return 0;

}
