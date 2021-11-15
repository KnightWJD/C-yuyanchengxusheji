                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  //设圆半径r=1.5 , 圆柱高 3 , 求圆周长,圆面积,圆球表面积,圆球体积,圆柱体积
//将一个数组的值按逆序重新存放

#include <stdio.h>

int main()
{
    int arr[5]={1,8,7,7,2},i,tmp;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<size/2;i++)
    {
        tmp = arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=tmp;
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
