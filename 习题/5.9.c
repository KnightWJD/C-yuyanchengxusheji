                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  //设圆半径r=1.5 , 圆柱高 3 , 求圆周长,圆面积,圆球表面积,圆球体积,圆柱体积
//输出1000以内所有的"完数":一个数恰好等于它的因子之和
//例: 6 = 1+2+3
//输出格式: 6 its factors are 1,2,3


#include <stdio.h>
#include <math.h>

int main()
{
    int i,j;
    for(i=2;i<=1000;i++)
    {
        int a = 0;
        for(j=1;j<= i/2;j++)
        {
            if(i%j == 0)
            {

                a += j;
            }
        }
        if(a == i)
        {
            printf("%d its factors are 1",i);
            for(j=2;j<= i/2;j++)
            {
                if(i%j == 0)
                {
                    printf(", %d",j);
                }
            }
            printf("\n");
        }

    }
    return 0;

}
