                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  //设圆半径r=1.5 , 圆柱高 3 , 求圆周长,圆面积,圆球表面积,圆球体积,圆柱体积
//输入一行字符,分别统计其中的英文字母,空格,数字和其它字符的个数
#include <stdio.h>

int main()
{
    char a;
    int letter = 0,space = 0,number = 0,others = 0;
    printf("请输入一行字符\n");
    while((a=getchar())!='\n')
          {

            if((a>='A'&&a<='Z')||(a>='a'&&a<='z'))
              {
                  letter++;
              }
            else if(a==' ')
            {
                space++;
            }
            else if(a>='0'&&a<='9')
            {
                number++;
            }
            else
            {
                others++;
            }

          }
    printf("英文字母有\t%d个\n空格有\t%d个\n数字有\t%d个\n其他字符有\t%d个",letter,space,number,others);
    return 0;
}
