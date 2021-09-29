                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  //设圆半径r=1.5 , 圆柱高 3 , 求圆周长,圆面积,圆球表面积,圆球体积,圆柱体积
//按照考试成绩的等级输出百分制分数段,A为85以上,B为70-84,C为60-69,D为60分以下.等级由键盘输入
#include <stdio.h>

int main()
{
    char i;
    printf("请输入你的成绩等级\n");
    scanf("%c",&i);
    i =(i >= 'a' & i<='z')?(i-32):i;
    switch(i)
    {
    case 'A':
        printf("成绩为85-100\n");
        break;
    case 'B':
        printf("成绩为70-84\n");
        break;
    case 'C':
        printf("成绩为60-69\n");
        break;
    case 'D':
        printf("成绩为0-59\n");
        break;
    default:
        printf("输入错误,请重新输入\n");
    }
    return 0;

}
