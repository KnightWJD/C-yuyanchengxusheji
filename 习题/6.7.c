                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  //设圆半径r=1.5 , 圆柱高 3 , 求圆周长,圆面积,圆球表面积,圆球体积,圆柱体积
//输出"魔方阵",每一行每一列对角线之和均相等,要求输出1~n^2的自然数构成的魔方阵

/*
    8   1   6
    3   5   7
    4   9   2
*/

#include <stdio.h>

int main()
{
    int Array_MagicCube[100][100] = {0},i,j,n,row,col,PreRow,PreCol;
    printf("请输入n(100以内的奇数)的值:  ");
GotoOne:
    scanf("%d",&n);
    if(n>100 || n<=0 || n%2 == 0)
    {
        printf("您输入的数据有误,请重新输入: ");
        goto GotoOne;
    }
    row = 0;
    col = n/2;
    Array_MagicCube[row][col] = 1;
    for(i=2;i<=n*n;i++)
    {
        row--;
        col++;
        if(row < 0)
        {
            row = n-1;
        }
        if(col > n-1)
        {
            col = 0;
        }
        if(Array_MagicCube[row][col] != 0)
        {
            row = PreRow+1;
            col = PreCol;
        }
        PreRow = row;
        PreCol = col;
        Array_MagicCube[row][col]=i;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%-4d ",Array_MagicCube[i][j]);
        }
        printf("\n");
    }
    return 0;
}
