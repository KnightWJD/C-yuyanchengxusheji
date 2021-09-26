//贷款多少月还清
/*
    购房者从银行贷了一笔款 d , 准备每月还款额为 p , 月利率为 r , 计算多少月能还清. 设 d 为
    300 000 元, p 为 6000 元 , r 为 1% ,对求得的月份取小数点后一位,对第二位按四舍五入处理
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float d = 300000.0;
    float p = 6000.0;
    float r = 0.01;
    float m = log(p/(p-d*r))/log(1+r);
    printf("还清需要的月数为%.1f\n",m);


    return 0;

}
