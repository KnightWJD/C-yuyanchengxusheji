                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  //设圆半径r=1.5 , 圆柱高 3 , 求圆周长,圆面积,圆球表面积,圆球体积,圆柱体积
//用二分法求下面方程在(-10,10)的根
//2x^3 - 4x^2 + 3x -6 =0

#include <stdio.h>
#include <math.h>
int main()
{
    double right=10.0,left=-10.0,root;
    do
    {
        root = (right+left)/2;
        if((2*pow(root,3)-4*pow(root,2)+3*root-6) > 0)
        {
            right = root;
        }
        if((2*pow(root,3)-4*pow(root,2)+3*root-6) < 0)
        {
            left = root;
        }
    }while((2*pow(root,3)-4*pow(root,2)+3*root-6) != 0);

    printf("the root of the equation is %lf\n",root);
    return 0;

}
