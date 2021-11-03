                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  //设圆半径r=1.5 , 圆柱高 3 , 求圆周长,圆面积,圆球表面积,圆球体积,圆柱体积
// 2/1,3/2,5/3,8/5,13/8,.... 求这个数列前20项之和



#include <stdio.h>
#include <math.h>

int main()
{
    double i=2.0,j=1.0,k,sum=0;
    int count;
    for(count=1;count<=20;count++)
    {
        sum += i/j;
        k = i;
        i = i+j;
        j=k;
    }
    printf("%lf",sum);
    return 0;

}
