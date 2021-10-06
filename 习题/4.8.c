                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  //设圆半径r=1.5 , 圆柱高 3 , 求圆周长,圆面积,圆球表面积,圆球体积,圆柱体积
//百分制,90分以上为'A',80-89为'B',70-79为'C',60-69为'D',60分以下为'E'

#include <stdio.h>
#include <math.h>

int main()
{
    float i ;
    char grade;
a:
    printf("请输入您的成绩:\n");
    scanf("%f",&i);
    if(i>100 || i<0)
    {
        printf("输入成绩有误,请重新输入\n");
        goto a;
    }
    switch((int)(i/10))
    {
    case 10:
    case 9: grade = 'A'; break;
    case 8: grade = 'B'; break;
    case 7: grade = 'C'; break;
    case 6: grade = 'D'; break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:grade = 'E'; break;
    }
    printf("您的成绩所对应的等级为\t%c\n",grade);
    return 0;

}
