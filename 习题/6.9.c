                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  //设圆半径r=1.5 , 圆柱高 3 , 求圆周长,圆面积,圆球表面积,圆球体积,圆柱体积
//有15个数由大到小顺序存放在一个数组里,输入一个数,要求用折半查找法找出该数是数组中第几个元素的值.如果不在数组中,则输出无此数

#include <stdio.h>

int main()
{
    int array_ZB[15]={15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
    int right=14,left=0,n,i,middle;
    printf("请输入一个数\n");
    scanf("%d",&n);

    if(n>array_ZB[left] || n<array_ZB[right])
    {
        printf("无此数\n");
        return 0;
    }
    if(n==array_ZB[left])
    {
        printf("该数在数组中,为第 %d 个元素的值\n",left+1);
        return 0;
    }
    if(n==array_ZB[right])
    {
        printf("该数在数组中,为第 %d 个元素的值\n",right+1);
        return 0;
    }
    for(i=0;i<14/2;i++)
    {
        middle =(right+left)/2;
        if(n>array_ZB[middle])
        {
            right = middle;
        }
        else if(n<array_ZB[middle])
        {
            left = middle;
        }
        else
        {
            break;
        }
    }
    printf("该数在数组中,为第 %d 个元素的值\n",middle+1);
    return 0;
}

