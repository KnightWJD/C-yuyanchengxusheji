//设圆半径r=1.5 , 圆柱高 3 , 求圆周长,圆面积,圆球表面积,圆球体积,圆柱体积
//用scanf 输入数据 ,结果取小数点后2位
#include <stdio.h>
#include <math.h>

int main()
{
    float r =1.5;
    float h = 3.0;
    printf("请输入半径和高\n");
    scanf("%f%f",&r,&h);
    printf("圆周长为%.2f\n",2*3.14*r);
    printf("圆面积为%.2f\n",3.14*r*r);
    printf("圆球表面积为%.2f\n",4*3.14*r*r);
    printf("圆球体积为%.2f\n",(4/3)*3.14*r*r*r);
    printf("圆柱体积为%.2f\n",3.14*r*r*h);

    return 0;

}
