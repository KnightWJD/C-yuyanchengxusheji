                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  //设圆半径r=1.5 , 圆柱高 3 , 求圆周长,圆面积,圆球表面积,圆球体积,圆柱体积
//1+2+....+100 + 1*1+2*2+...+50*50 + 1/1+1/2+...+1/10
#include <stdio.h>
int main()
{
    double i , n1=0,n2=0,n3=0,sum;
    for(i=1;i<=100;i++)
    {
        n1+=i;
    }
    for(i=1;i<=50;i++)
    {
        n2+=i*i;
    }
    for(i=1;i<=10;i++)
    {
        n3+=1/i;
    }
    sum = n1+n2+n3;
    printf("%lf\n",sum);
    return 0;
}
