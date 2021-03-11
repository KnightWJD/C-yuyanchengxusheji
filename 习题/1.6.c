 // 编写一个C程序,运行时输入a,b,c 三个值,输出其中的最大者

#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int max = 0;
    printf("请输入三个数字\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c)
    {
        max = a;
    }
    else if(b>=a && b>=c)
    {
        max = b;
    }
    else
    {
        max = c;
    }
    printf("最大的数字为 %d \n",max);
    return 0;
}

