// 写一个判断素数的函数 ,在主函数中输入一个整数,输出是否为素数的信息

#include <stdio.h>
#include <math.h>
int main()
{
     int SuShu(int a);
     int a,n;
     printf("请输入一个整数:\n");
     scanf("%d",&a);
     n=SuShu(a);
     if(n == 1)
     {
         printf("%d 是素数",a);
     }
     else
     {
         printf("%d 不是素数",a);
     }
     return 0;
}

int SuShu(int a)
{
    int i;
    for(i=2;i<=sqrt((double)a);i++)
    {
        if(a%i == 0)
        {
            return 0;
        }
    }
    return 1;
}
