//假如我国国民生产总值的年增长率为7%,计算10年后我国国民生产总值与现在相比增长多少百分比

#include <stdio.h>
#include <math.h>

int main()
{
    double n=10.0;
    printf("p=%f",pow(1.07,n));  //pow为平方函数,里面必须是double类型
    return 0;

}
