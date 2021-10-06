                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  //设圆半径r=1.5 , 圆柱高 3 , 求圆周长,圆面积,圆球表面积,圆球体积,圆柱体积
//给一个不多于五位的正整数,要求:
/*
    求出它是几位数
    分别输出每一位数字
    按逆序输出每一位数字
*/
#include <stdio.h>


int main()
{
    int i ;
    int k;
    int j;
    int j1;
    int k1;
    int a1[5]={0111};
a:
    printf("请输入一个正整数(不多于五位)\n");
    scanf("%d",&i);
    if(i>99999 || i<=0)
    {
        printf("输入有误,请重新输入\n");
        goto a;
    }

    j = i;
    for(k=0;j>=1;k++)
    {
        a1[k] = j%10;
        j = j/10;
    }
    printf("%d为%d位数\n",i,k);

    printf("分别输出每一位数字:");
    for(k1=k;k1>0;k1--)
        {
            printf("%d\t",a1[k1-1]);
        }
    printf("\n");

    printf("逆序输出每一位数字:");
    for(k1=0;k1<k;k1++)
        {
            printf("%d",a1[k1]);
        }
    return 0;
}
