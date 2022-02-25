// 写一个函数,输入十六进制数,输出相应的十进制数

#include <stdio.h>
#include <string.h>
#include <math.h>

#define N 16

void Convert_Decimal(char Sixteen[N])
{
    int i,len=strlen(Sixteen),decimal=0,tmp;

    for(i=0;i<len;i++)
    {
        switch(Sixteen[len-i-1])
        {
        case 'A':
                tmp = 10;
                decimal += tmp*(int)(pow(16,i));
                break;
        case 'B':
                tmp = 11;
                decimal += tmp*(int)(pow(16,i));
                break;
        case 'C':
                tmp = 12;
                decimal += tmp*(int)(pow(16,i));
                break;
        case 'D':
                tmp = 13;
                decimal += tmp*(int)(pow(16,i));
                break;
        case 'E':
                tmp = 14;
                decimal += tmp*(int)(pow(16,i));
                break;
        case 'F':
                tmp = 15;
                decimal += tmp*(int)(pow(16,i));
                break;
        default:
                decimal +=(Sixteen[len-i-1]-'0')*(int)(pow(16,i)); //字符串中的字符转换成int 要减'0';

        }
    }
    printf("十六进制数 %s 转换为十进制为  %d",Sixteen,decimal);
}

int main()
{
    char Sixteen[N]={0};
    printf("请输入一个十六进制数:\n");
    gets(Sixteen);
    Convert_Decimal(Sixteen);
    return 0;
}




