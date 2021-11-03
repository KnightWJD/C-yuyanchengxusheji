                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  //设圆半径r=1.5 , 圆柱高 3 , 求圆周长,圆面积,圆球表面积,圆球体积,圆柱体积
//ABC 和 XYZ 比赛 , A不和X比 ,C不和X,Z比

#include <stdio.h>

int main()
{
    char A,B,C;
    for(A = 'X';A<='Z';A++)
    {
        for(B = 'X';B<='Z';B++)
        {
            for(C = 'X';C<='Z';C++)
            {
                if(A!='X' && C!='X' && C!='Z' && A!=B && A!=C && B!=C)
                {
                    printf("A vs %c\nB vs %c\nC vs %c\n",A,B,C);
                    break;
                }
            }
        }
    }

    return 0;

}
