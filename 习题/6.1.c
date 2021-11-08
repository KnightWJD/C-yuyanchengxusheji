                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  //设圆半径r=1.5 , 圆柱高 3 , 求圆周长,圆面积,圆球表面积,圆球体积,圆柱体积
//用筛选法求100以内的素数

#include <stdio.h>
#include <string.h>
int main()
{
    int ss[99] = {0},i,k,j;
    for(i=2;i<=100;i++)
    {
        ss[i-2] = i;
    }
    for(i=0;i<99;i++)
    {
        if(ss[i] != 0)
        {
            k = ss[i];
        }
        for(j = i+1;j<99;j++)
        {
            if(ss[j]%k == 0)
            {
                ss[j]=0;
            }
        }
    }
    for(i=0;i<99;i++)
    {
        if(ss[i]!=0)
        {
            printf("%d\n",ss[i]);
        }
    }

    return 0;

}
