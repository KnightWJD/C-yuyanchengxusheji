//给定一个大写字母,要求用小写字母输出
//在 ASCII 中 , 小写字母比大写字母大32
#include <stdio.h>
int main()
{
    char a = 0;
    printf("请输入一个大写字母\n");
    scanf("%c",&a);
    char b = a+ 32;
    printf("%c\n",b);
    return 0;
}
