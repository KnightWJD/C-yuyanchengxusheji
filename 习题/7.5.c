//写一个函数,使输入的一个字符串按反序存放,在主函数中输入和输出字符串

#include <stdio.h>
#include <string.h>
void Devert_ZiFuChuan(char array_ZiFuChuan[])
{
    int i;
    char tmp;
    int sz = strlen(array_ZiFuChuan)-1;
    for(i=0;i<=sz/2;i++)
    {
        tmp = array_ZiFuChuan[i];
        array_ZiFuChuan[i] = array_ZiFuChuan[sz-i];
        array_ZiFuChuan[sz-i] = tmp;
    }
}

int main()
{
    char array_ZiFuChuan[100]={0};
    printf("请输入一个字符串\n");
    gets(array_ZiFuChuan);
    Devert_ZiFuChuan(array_ZiFuChuan);
    printf("%s",array_ZiFuChuan);
    return 0;
}
