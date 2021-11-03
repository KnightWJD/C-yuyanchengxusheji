                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  //设圆半径r=1.5 , 圆柱高 3 , 求圆周长,圆面积,圆球表面积,圆球体积,圆柱体积
// 猴子第一天摘下若干个桃子,吃了一半,还不过瘾,又吃了一个\
//第二天又吃了一半加一个
//第十条想吃时,只剩一个
//第一天摘了多少个

#include <stdio.h>

int main()
{
    int total_sum = 1,i;
    for(i=1;i<10;i++)
    {
        total_sum = (total_sum+1)*2;
    }
    printf("%d\n",total_sum);
    return 0;

}
