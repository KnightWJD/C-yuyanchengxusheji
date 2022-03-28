//有两个磁盘文件A和B,各存放一行字母，今要求把这两个文件中的信息合并
//(按字母顺序排列),输出到一个新文件C中去.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    FILE* fa;
    FILE* fb;
    FILE* fc;

    fa=fopen("A.txt","w");
    fb=fopen("B.txt","w");
    fc=fopen("C.txt","w");

    if(fa == NULL)
    {
        printf("cannot open A.txt");
        return 0;
    }
    if(fb == NULL)
    {
        printf("cannot open B.txt");
        return 0;
    }
    if(fc == NULL)
    {
        printf("cannot open C.txt");
        return 0;
    }
    char* str1="zyx";
    char* str2="cba";

    fputs(str1,fa);
    fclose(fa);
    fa=fopen("A.txt","r");
    fputs(str2,fb);
    fclose(fb);
    fb=fopen("B.txt","r");
    char str[20]={0};
    char ch;
    int i;
    for(i=0;(ch=fgetc(fa))!=EOF;i++)
    {
        str[i]=ch;
    }
    int k =i;
    for(i=k;(ch=fgetc(fb))!=EOF;i++)
    {
        str[i]=ch;
    }

    int j;
    int len = strlen(str);
    char tmp;
    for(i=0;i<len-1;i++)
    {
        for(j=0;j<len-i-1;j++)
        {
            if(str[j]>str[j+1])
            {
                tmp = str[j+1];
                str[j+1]=str[j];
                str[j]=tmp;
            }
        }
    }

    fputs(str,fc);





    fclose(fa);
    fclose(fb);
    fclose(fc);
    return 0;
}
