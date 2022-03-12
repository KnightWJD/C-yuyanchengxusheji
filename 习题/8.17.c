//写一-函数,实现两个字符串的比较。即自己写一个strcmp函数,函数原型为
//设pl指向字符串s1, p2指向字符串s2。要求当s1=s2时,返回值为0;若sl≠s2,返回它
//们二者第1个不同字符的ASCII 码差值(如"BOY"与"BAD" ,第2个字母不同,0与A之差
//为79一65=14)。如果s1>s2,则输出正值;如果s1<s2，则输出负值。


#include <stdio.h>
#include <string.h>
int my_strcmp(char *p1,char *p2,int len_one,int len_two)
{
    int i;
    if(len_one > len_two)
    {
        for(i=0;*(p2+i)!='\0';i++)
        {
            if(*(p1+i)!=*(p2+i))
            {
                return (p1+i)-*(p2+i);
            }
        }
        return *(p1+i);
    }
    else if(len_one < len_two)
    {
        for(i=0;*(p1+i)!='\0';i++)
        {
            if(*(p1+i)!=*(p2+i))
            {
                return *(p1+i)-*(p2+i);
            }
        }
        return '\0'-*(p2+i);
    }
    else
    {
        for(i=0;*(p1+i)!='\0';i++)
        {
            if(*(p1+i)!=*(p2+i))
            {
                return *(p1+i)-*(p2+i);
            }
        }
        return 0;
    }

}

int main()
{
//    char s1[32]={'b','o','y'};
//    char s2[32]={'b','a','d'};
    char s1[32]={'a','b','c','d','e'};
    char s2[32]={'a','b','c','d'};
    int len_one=strlen(s1);
    int len_two=strlen(s2);
    int acc = my_strcmp(s1,s2,len_one,len_two);
    printf("%d",acc);
}
