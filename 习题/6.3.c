                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  //设圆半径r=1.5 , 圆柱高 3 , 求圆周长,圆面积,圆球表面积,圆球体积,圆柱体积
//求一个3x3的整型矩阵对角线之和

#include <stdio.h>

int main()
{
    int arrint[3][3],i,j,sum1=0,sum2=0;
    int size = sizeof(arrint)/sizeof(arrint[0]);
    printf("请输入9个数组成3x3的矩阵\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            scanf("%d",&arrint[i][j]);
        }

    }
    printf("矩阵为:\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d ",arrint[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<size;i++)
    {
        sum1+=arrint[i][i];
    }
    printf("左上到右下对角线之和为:%d\n",sum1);
    for(i=0,j=2;i<3;i++,j--)
    {
        sum2+=arrint[i][j];
    }
    printf("左上到右下对角线之和为:%d\n",sum2);
    return 0;

}
