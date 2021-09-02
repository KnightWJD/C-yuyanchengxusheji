 // 求1x2x3x4x5




#include <stdio.h>

int main()
{
    int t = 0;
    int i = 0;
    for(t=1,i=2;i<=5;i++)
    {
        t = t*i;
    }
    printf("%d\n",t);
    return 0;
}
