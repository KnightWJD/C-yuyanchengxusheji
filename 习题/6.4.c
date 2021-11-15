                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  //设圆半径r=1.5 , 圆柱高 3 , 求圆周长,圆面积,圆球表面积,圆球体积,圆柱体积
//有一个已经排好序的数组,要求输入一个数后.按原来排好的规律将它插入数组中

#include <stdio.h>

int main()
{
    int arr[]={1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]),i,a,tmp,j;
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n请输入一个数\n");
    scanf("%d",&a);
    for(i=0;i<size;i++)
    {
        if(arr[i]>=a)
        {
            for(j=i;j<=size;j++)
            {
                tmp = a;
                a = arr[j];
                arr[j] = tmp;
            }
            break;
        }
    }
    for(i=0;i<=size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
