                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  //设圆半径r=1.5 , 圆柱高 3 , 求圆周长,圆面积,圆球表面积,圆球体积,圆柱体积
//输出以下图案
/*

     *          1   3   1
    ***         2   2   3
   *****        3   1   5
  *******       4   0   7
   *****        1   1   5
    ***         2   2   3
     *          3   3   1

*/

#include <stdio.h>
#include <math.h>
int main()
{
    int i,j;
    //上四行
    for(i=1;i<=4;i++)
    {
        for(j=4-i;j>0;j--)
        {
            printf(" ");
        }
        for(j=2*i-1;j>0;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    //下三行
    for(i=1;i<=3;i++)
    {
        for(j=i;j>0;j--)
        {
            printf(" ");
        }
        for(j=7-(2*i);j>0;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;

}
