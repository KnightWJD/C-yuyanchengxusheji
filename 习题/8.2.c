//输入三个字符串,按由小到大的顺序输出

#include <stdio.h>
#include <string.h>

void swap(char *p1,char *p2)
{
    char tmp[15];
    strcpy(tmp,p1);
    strcpy(p1,p2);
    strcpy(p2,tmp);
}
int main()
{
    char a[15],b[15],c[15];
    printf("请输入第一个字符串:\n");
    gets(a);
    printf("请输入第二个字符串:\n");
    gets(b);
    printf("请输入第三个字符串:\n");
    gets(c);
    if(strcmp(a,b)>0)
    {
        swap(a,b);
    }
    if(strcmp(a,c)>0)
    {
        swap(a,c);
    }
    if(strcmp(b,c)>0);
    {
        swap(b,c);
    }

    printf("%s < %s < %s",a,b,c);
    return 0;
}
