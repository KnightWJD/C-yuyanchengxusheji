                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  //设圆半径r=1.5 , 圆柱高 3 , 求圆周长,圆面积,圆球表面积,圆球体积,圆柱体积
//输入四个整数,要求按从大到小输出


#include <stdio.h>


int main()
{
    int a,b,c,d,t;
    printf("请输入4个整数\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b)
       {
           t = a ;
           a =b ;
            b=t;
       }
    if(a>c)
    {
        t = a;
        a=c;
        c=t;
    }
    if(a>d)
    {
        t=a;
        a=d;
        d=t;
    }
    if(b>c)
    {
        t =b;
        b=c;
        c=t;
    }
    if(b>d)
    {
        t=b;
        b=d;
        d=t;
    }

    if(c>d)
    {
        t=c;
        c=d;
        d=t;
    }
    printf("由小到大输出分别为\t%d\t%d\t%d\t%d",a,b,c,d);
    return 0;
}
