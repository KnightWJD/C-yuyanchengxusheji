                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  //设圆半径r=1.5 , 圆柱高 3 , 求圆周长,圆面积,圆球表面积,圆球体积,圆柱体积
//求a+aa+aaa+aaaa+...n(a)
//2+22+222+2222+22222(n=5)
#include <stdio.h>
int main()
{
    int a,n,i,S=0,t=0;
    printf("请输入a,n的值\n");
    scanf("%d%d",&a,&n);
    for(i=1;i<=n;i++)
    {
        t = t + a;
        S = S + t;
        a = a*10;
    }
    printf("%d\n",S);
    return 0;
}
