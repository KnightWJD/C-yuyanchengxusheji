
//用递归方法求n阶勒让德多项式的值
#include <stdio.h>
double poly(int x,int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n==1)
    {
        return x;
    }
    return ((2*n-1)*x-poly(x,n-1)-(n-1)*poly(x,n-2))/n;
}

int main()
{
    int x,n;
a:
    printf("请输入x和n的值: ");
    scanf("%d%d",&x,&n);
    if(n<0)
    {
        printf("n的值必须为正整数\n");
        goto a;
    }
    double result = poly(x,n);
    printf("%d阶勒让德多项式的值为 %lf",n,result);

    return 0;


}
