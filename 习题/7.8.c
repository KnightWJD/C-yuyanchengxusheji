
//写一个函数,输入一个4位数字,要求输出的这4个数字字符,但每两个函数间空一个空格

#include <stdio.h>

void Print_space_numbers(char array_print[])
{
    int i;
    for(i = 0;array_print[i] != '\0';i++)
    {
        printf("%c",array_print[i]);
        printf(" ");
    }
}

int main()
{
    char array_number[4]={0};
    printf("请输入四位数字\n");
    gets(array_number);
    Print_space_numbers(array_number);
    return 0;
}
