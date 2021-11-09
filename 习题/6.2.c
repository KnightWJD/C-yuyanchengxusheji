                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  //设圆半径r=1.5 , 圆柱高 3 , 求圆周长,圆面积,圆球表面积,圆球体积,圆柱体积
//用选择法对十个整数排序

#include <stdio.h>

int main()
{
    int arr[10]={9,2,3,4,1,5,8,13,52,43},i,j,maxPos,tmp;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i< size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(j=0;j<size;j++)
    {
        maxPos =0;
        for(i=1;i<size-j;i++)
        {
            if(arr[maxPos] < arr[i])
            {
                maxPos = i ;
            }
        }
        tmp = arr[maxPos];
        arr[maxPos] = arr[size-1-j];
        arr[size-j-1 ] = tmp;
    }
    for(i=0;i< size;i++)
    {
        printf("%d ",arr[i]);
    }


    return 0;

}
