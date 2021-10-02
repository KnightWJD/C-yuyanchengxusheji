                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  //设圆半径r=1.5 , 圆柱高 3 , 求圆周长,圆面积,圆球表面积,圆球体积,圆柱体积
//有三个整数abc,由键盘输入,输出其中的最大值
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("请输入三个值\n");
    scanf("%d%d%d",&a,&b,&c);
    a = (a>b?a:b);
    c = (c>a?c:a);
    printf("最大值为%d\n",c);

    return 0;

}
