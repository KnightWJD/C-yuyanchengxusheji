//输入一行文字,找出其中大写字母、小写字母、空格、数字以及其他字符各有多少

#include  <stdio.h>

int main()
{
    char array[100]={};
    char *p = array;
    gets(p);
    int i,big=0;
    int small=0;
    int space=0;
    int num=0;
    int others=0;
    for(i=0;*(p+i)!='\0';i++)
    {
        if(*(p+i)>='A' && *(p+i)<='Z')
        {
            big++;
        }
        else if(*(p+i)>='a' && *(p+i)<='z')
        {
            small++;
        }
        else if(*(p+i)==' ')
        {
            space++;
        }
        else if(*(p+i)>='0' && *(p+i)<='9')
        {
            num++;
        }
        else
        {
            others++;
        }
    }
    printf("\n大写字母 %d个\n小写字母 %d个\n空格 %d个\n数字 %d个\n其他字符 %d个",big,small,space,num,others);
    return 0;
}
