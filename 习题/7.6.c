//写一个函数,将两个字符串连接

#include <stdio.h>
#include <string.h>
void Connect_CharacterString(char array_One[],char array_Two[])
{
    //printf("%s",strcat(array_One,array_Two));
    char array_Three[200] = {0};
    int i;
    int sz = strlen(array_One);
    for(i=0;array_One[i] != '\0';i++)
    {
        array_Three[i] = array_One[i];
    }
    for(i=0;array_Two[i] != '\0';i++)
    {
        array_Three[sz+i] = array_Two[i];
    }
    printf("%s",array_Three);
}
int main()
{
    char array_One[100]={0};
    char array_Two[100]={0};
    printf("请输入第一个字符串\n");
    gets(array_One);
    printf("请输入第二个字符串\n");
    gets(array_Two);
    Connect_CharacterString(array_One,array_Two);
    return 0;
}
