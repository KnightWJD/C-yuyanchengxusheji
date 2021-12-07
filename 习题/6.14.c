// 将两个字符串 s1 和 s2 比较,若s1 >s2 输出一个正数;若 s1 = s2 输出0;若s1 < s2,输出一个负数.不要用strcpy函数
//两个字符串用 gets 读入
//字符串字符 >= 两个时取第二个字符比较
#include <stdio.h>

int main()
{
    char s1[100] ={0};
    char s2[100] ={0};
    char a,b;
    int i,count;
    printf("please input the s1:\n");
    gets(s1);
    printf("please input the s2:\n");
    gets(s2);
    for(i=0,count=0;s1[i] !='\0';i++)
    {
        count++;
    }
    if(count>=2)
    {
        a = s1[1];
    }
    else
    {
        a = s1[0];
    }
    for(i=0,count=0;s2[i] !='\0';i++)
    {
        count++;
    }
    if(count>=2)
    {
        b = s2[1];
    }
    else
    {
        b = s2[0];
    }
    printf("\n%d",a-b);
    return 0;
}



