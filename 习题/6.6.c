                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  //设圆半径r=1.5 , 圆柱高 3 , 求圆周长,圆面积,圆球表面积,圆球体积,圆柱体积
//输出以下的杨辉三角形(要求输出10行)

/*
1
1   1
1   2   1
1   3   3   1
1   4   6   4   1
1   5   10  10  5   1
.....
*/

#include <stdio.h>

int main()
{
    int arr[10][10] = {0},i,j;
    for(i=0;i<10;i++)
    {
        arr[i][0]=1;
        arr[i][i]=1;
        if(i>=2)
        {
            for(j=1;j<i;j++)
            {
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
            }
        }
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%-3d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
