// 写一个函数,使给定的一个 3x3 的二维整型数组转置,即行列互换

#include <stdio.h>
#define ROW 3
#define COL 3
void array_Print(int array_one[ROW][COL])
{
    int i,j;
    for(i = 0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",array_one[i][j]);
        }
        printf("\n");
    }
}
void array_ZhuanZhi(int array_one[ROW][COL])
{
    int i,j,tmp;
    for(i = 0;i<3;i++)
    {
        for(j=0;j<i;j++) //重点 j<i
        {
                tmp = array_one[i][j];
                array_one[i][j] = array_one[j][i];
                array_one[j][i] = tmp;
        }
    }
}
int main()
{
    int array_one[ROW][COL] = {1,2,3,4,5,6,7,8,9};
    array_Print(array_one);
    array_ZhuanZhi(array_one);
    printf("\n");
    array_Print(array_one);
    return 0;
}

