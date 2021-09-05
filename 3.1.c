 // 把华氏法温度 64°F ,转化为摄氏度
 //公式 : c = 5/9(f-32)

#include <stdio.h>

int main()
{
    int f = 64;
    double c = (f-32)*5.0/9;
    printf("%f\n",c);

    return 0;
}
