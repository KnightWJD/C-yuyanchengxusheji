//写一个字符串的长度。在 main 函数中输入字符串,并输出其长度

#include <stdio.h>
#include <string.h>
int main()
{
    char array[100]={};
    char *p =array;
    gets(p);
    int len = strlen(p);
    printf("\n字符串长度为 %d",len);
    return 0;
}
