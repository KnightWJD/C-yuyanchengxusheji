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
    int n,i,j,k=1,prerow,precol;
    int arr[100][100] = {0};
    printf("请输入n(奇数)的值\n");
gotoA:
    scanf("%d",&n);
    if(n%2 == 0 || n>100)
    {
        printf("您输入的是偶数或者大于一百,请重新输入:\n");
        goto gotoA;
    }

    int row = 0;
    int col = n/2;
    arr[row][col]=1;
    for(i=2;i<=n*n;i++)
    {
        row--;
        col++;
        if(row<0)
        {
            row = n-1;
        }
        if(col>=n)
        {
            col = 0;
        }
        if(arr[row][col] != 0)
        {
            row = prerow+1;
            col = precol;
        }
        arr[row][col]=i;
        prerow = row;
        precol = col;
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
              printf("%-4d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
