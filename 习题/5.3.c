                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  //设圆半径r=1.5 , 圆柱高 3 , 求圆周长,圆面积,圆球表面积,圆球体积,圆柱体积
//输入两个正整数m和n,求其最大公约数和自小公倍数
#include <stdio.h>

int main()
{
    int m,n,i,k1,k2;
a:
    printf("请输入两个正整数:\n");
    scanf("%d%d",&m,&n);
    if(m<=0 || n<=0)
    {
        printf("输入数据有误,请重新输入\n");
        goto a;
    }
    k1 = (m>n?n:m);


    for(i=k1;i>0;i--)
    {
        if(m%i == 0 && n%i == 0)
        {
            break;
        }
    }
    printf("%d 和 %d 的最大公约数为\t%d\n",m,n,i);

    if(m>=n && m%n==0)
    {
        printf("%d 和 %d 的最小公倍数为\t%d\n",m,n,m);
    }
    else if(n>m && n%m ==0)
    {
        printf("%d 和 %d 的最小公倍数为\t%d\n",m,n,n);
    }
    else
    {
        for(i=2;i>0;i++)
        {
            if((m*i)%n==0 || (n*i)%m==0)
            {
                k2 = (m>n?m*i:n*i);
                break;
            }
        }
        printf("%d 和 %d 的最小公倍数为\t%d\n",m,n,k2);
    }

    return 0;
}
