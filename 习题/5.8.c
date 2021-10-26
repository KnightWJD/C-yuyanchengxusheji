                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  //设圆半径r=1.5 , 圆柱高 3 , 求圆周长,圆面积,圆球表面积,圆球体积,圆柱体积
//输出所有的"水仙花数":一个三位数,各位数字立方和等于本身
//例: 153 = 1³ + 5³ + 3³

#include <stdio.h>
#include <math.h>

int main()
{
    int i,a,b,c;
    for(i=100;i<=999;i++)
    {
        a = i/100;
        b = (i%100)/10;
        c = (i%100)%10;
        if(i == a*a*a+b*b*b+c*c*c)
        {
            printf("%d\n",i);
        }
    }

    return 0;
}
