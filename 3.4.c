// 给出三角形的边长,求三角形的面积

//公式 area = 根号s(s-a)(s-b)(s-c)   其中 s =(a+b+c)/2

#include <math.h>
#include <stdio.h>

int main()
{
    float a,b,c,area;
    printf("please input three side length of the triangle \n");
    scanf("%f%f%f",&a,&b,&c);
    printf("%f %f %f\n",a,b,c);
    float s = (a+b+c)/2.0;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area = %f\n",area);
    return 0;
}
