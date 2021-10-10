                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  //设圆半径r=1.5 , 圆柱高 3 , 求圆周长,圆面积,圆球表面积,圆球体积,圆柱体积
//四个圆塔,(2.2)(-2.2)(-2.-2)(2.-2),半径1,高度10m.输入任意一点的坐标,求该点的高度塔外高度为0)
#include <stdio.h>
#include <math.h>

int main()
{
    double x,y;
    double d;
    int h1 = 10;
    int h2 = 0;
    printf("please input a coordinate\n");
    scanf("%lf%lf",&x,&y);
    double fx = fabs(x);
    double fy = fabs(y);

    //求距离圆心的距离
    double lenx = fabs(fx - 2);
    double leny = fabs(fy -2 );

    d = sqrt((lenx*lenx)+(leny*leny));

    if(d>1)
    {
        printf("The height of this coordinate is %d \n",h2);
    }
    else
    {
        printf("The height of this coordinate is %d \n",h1);
    }
    return 0;
}
