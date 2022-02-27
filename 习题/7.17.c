//用递归法将一个整数 n 转换成字符串。例如,输入 483,应输出字符串'483',字符串位数不确定,可以是任意位数的整数

#include <stdio.h>

void transform(int num)
{
    unsigned int p=num;
    if(p/10!=0)
    {
        transform(p/10);
    }
    printf("%c",p%10+'0'); // 加'0'把int变成char
}

int main()
{
    int num;
    printf("请输入整数数字:\n");
    scanf("%d",&num);
    transform(num);
    return 0;
}
