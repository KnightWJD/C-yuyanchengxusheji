//从键盘输入一个字符串,将其中的小写字母全部转换成大写字母，然后输出到一个
//磁盘文件test中保存,输入的字符串以“!”结束

#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    fp = fopen("text.txt","w");
    if(NULL==fp)
    {
        printf("erro");
        return -1;
    }
    char c;
    while(c!='!' && c!=EOF)
    {
        scanf("%c",&c);
        if(c>='a' && c<='z')
        {
            c-=32;

        }
        fputc(c,fp);
    }

    fclose(fp);

    return 0;
}
