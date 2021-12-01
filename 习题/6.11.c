                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  //设圆半径r=1.5 , 圆柱高 3 , 求圆周长,圆面积,圆球表面积,圆球体积,圆柱体积
//输出以下图案
/*
    * * * * *
      * * * * *
        * * * * *
          * * * * *
            * * * * *
*/

#include <stdio.h>

int main()
{
    char array_Xing[9]={'*',' ','*',' ','*',' ','*',' ','*',};
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<2*i;j++)
        {
            printf(" ");

        }
        for(j=0;j<9;j++)
        {
            printf("%c",array_Xing[j]);
        }
        printf("\n");
    }
    return 0;
}

