//写两个函数,分别求两个整数的最大公约数和最小公倍数,用主函数调用这两个函数,并输出结果.两个整数用键盘输入
#include <stdio.h>

int main()
{
    int Greatest_common_divisor(int a,int b);
    int Least_common_multiple(int a,int b);
    int a,b;
    printf("请输入第一个数的值\n");
    scanf("%d",&a);
    printf("请输入第二个数的值\n");
    scanf("%d",&b);
    printf("最大公约数为:\t%d\n",Greatest_common_divisor(a,b));
    printf("最小公倍数为:\t%d\n",Least_common_multiple(a,b));
    return 0;
}


int Greatest_common_divisor(int a,int b)
{
    int c;
    for(c = a>b?b:a;c>=1;c--)
    {
        if((a%c == 0) && (b%c==0))
        {
            return(c);
        }
    }
}

int Least_common_multiple(int a,int b)
{
    int c;
    for(c=a>b?a:b;c>=0;c++)
    {
        if((c%a == 0) && (c%b==0))
        {
            return(c);
        }
    }
}
