                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  //设圆半径r=1.5 , 圆柱高 3 , 求圆周长,圆面积,圆球表面积,圆球体积,圆柱体积
//找出一个二维数组的鞍点:该行最大,该列最小;可能没有鞍点

#include <stdio.h>

int main()
{
    int Array_SaddlePoint[3][3]={0},i,j,jOne,iOne,max,minus,count=0;
    int size = sizeof(Array_SaddlePoint)/sizeof(Array_SaddlePoint[0]);
    printf("请输入九个数字组成二维数列:\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            scanf("%d",&Array_SaddlePoint[i][j]);
        }
    }
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%-3d ",Array_SaddlePoint[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            count = 1;
            max = Array_SaddlePoint[i][j];
            minus = Array_SaddlePoint[i][j];
            for(jOne=0;jOne<size;jOne++)
            {
                if(Array_SaddlePoint[i][jOne]>max)
                {
                    count = 0;
                    break;
                }
            }

            for(iOne=0;iOne<size;iOne++)
            {
                if(Array_SaddlePoint[iOne][j] < minus)
                {
                    count = 0;
                    break;
                }
            }
            if(count == 1)
            {
                goto GotoOne;
            }
        }
    }
    printf("此二维数组没有鞍点");
    return 0;
GotoOne:
    printf("此二维数组的鞍点为: ");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            count = 1;
            max = Array_SaddlePoint[i][j];
            minus = Array_SaddlePoint[i][j];
            for(jOne=0;jOne<size;jOne++)
            {
                if(Array_SaddlePoint[i][jOne]>max)
                {
                    count = 0;
                    break;
                }
            }

            for(iOne=0;iOne<size;iOne++)
            {
                if(Array_SaddlePoint[iOne][j] < minus)
                {
                    count = 0;
                    break;
                }
            }
            if(count == 1)
            {
                printf("%d  ",Array_SaddlePoint[i][j]);
            }
        }
    }
    return 0;
}

