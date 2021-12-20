//写一个函数,输入一行字符.将此字符串中最长的单词输出

#include <stdio.h>
#include <string.h>

void Print_Longest(char array_one[])
{
    char array_longest[100]={0};
    int i=0,j,len=0;
    while(array_one[i] != '\0')
    {
        j=i;
        while(array_one[j]!=' ' && array_one[j]!='\0')
        {
            j++;
        }
        len = j-i;
        if(len>strlen(array_longest))
        {
            strncpy(array_longest,array_one+i,len);
        }
        j++;
        i=j;

    }
    printf("这个字符串中最长的单词为: %s\n",array_longest);
}
int main()
{
    char array_one[100]={0};
    printf("请输入一行字符\n");
    gets(array_one);
    Print_Longest(array_one);

    return 0;
}
