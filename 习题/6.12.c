                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  //设圆半径r=1.5 , 圆柱高 3 , 求圆周长,圆面积,圆球表面积,圆球体积,圆柱体积
//电文译成密码:第一个字母变成第二十六个字母,第i个字母变成(26-i+1)个字母

#include <stdio.h>

int main()
{
    char array_Password[100]={0};
    int i;
    printf("请输入密码\n");
    gets(array_Password);
    for(i=0;array_Password[i]!='\0';i++)
    {
        if(array_Password[i]>='A' && array_Password[i]<='Z')
        {
            array_Password[i]='A'+(26-(array_Password[i]-'A')-1);
        }
        if(array_Password[i]>='a' && array_Password[i]<='z')
        {
            array_Password[i]='a'+(26-(array_Password[i]-'a')-1);
        }

    }

    printf("%s\n",array_Password);


    return 0;
}
