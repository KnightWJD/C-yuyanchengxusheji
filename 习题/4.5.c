                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  //设圆半径r=1.5 , 圆柱高 3 , 求圆周长,圆面积,圆球表面积,圆球体积,圆柱体积
//在键盘输入一个小于1000的正数,要求输出它的平方根(如平方根不是整数,则输出其整数部分)
#include <stdio.h>
#include <math.h>

int main()
{
    double i;
    double k;
a:
    printf("请输入一个小于1000的正数\n");
    scanf("%lf",&i);
    if(i<=0 || i>1000)
    {
        printf("您输入的不是一个正数\n");
        goto a;
    }
    i = sqrt(i);
    i = modf(i,&k);

    printf("它的平方根为%.0lf\n",k);
    return 0;

}
