 // 求两个整数的较大值

#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    printf("请输入两个数\n");
    scanf("%d%d",&a,&b);
    printf("这两个数中 %d 最大\n",a>b?a:b);
    return 0;
}
