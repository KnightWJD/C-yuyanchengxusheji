//china 译成密码
// 密码规律, 用原来字母后面的第四个字母代替原来的字母
#include <stdio.h>
#include <math.h>

int main()
{
    char c1 = 'C';
    char c2 = 'h';
    char c3 = 'i';
    char c4 = 'n';
    char c5 = 'a';

    putchar(c1+4);
    putchar(c2+4);
    putchar(c3+4);
    putchar(c4+4);
    putchar(c5+4);

    printf("\n%c%c%c%c%c",c1+4,c2+4,c3+4,c4+4,c5+4);

    return 0;

}
