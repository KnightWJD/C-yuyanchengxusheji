
//编写一个函数,由实参传来一个字符串,统计此字符串中的字母,数字,空格,和其他字符的个数,在主函数中输入字符串以及输出上述的结果

#include <stdio.h>

int Letter=0,Digit=0,Space=0,Others=0;
void Statistic(char array_one[])
{
    int i;
    for (i=0;array_one[i] != '\0';i++)
    {
        if((array_one[i]>='a' && array_one[i]<='z') || (array_one[i]>='A' && array_one[i]<='Z'))
        {
            Letter++;
        }
        else if(array_one[i]>='0' && array_one[i]<='9')
        {
            Digit++;
        }
        else if(array_one[i]==' ')
        {
            Space++;
        }
        else
        {
            Others++;
        }
    }
}

int main()
{
    char array_one[100]= {0};
    printf("请输入一个字符串\n");
    gets(array_one);
    Statistic(array_one);
    printf("\n这个字符串中各个类型个数:\n字母: %d\n数字: %d\n空格: %d\n其他字符: %d\n",Letter,Digit,Space,Others);
    return 0;
}
