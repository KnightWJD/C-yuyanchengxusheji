 // 求1- 1/2 + 1/3 - 1/4 +....+ 1/99 - 1/100


#include <stdio.h>

int main()
{
    int i = 0;
    double k = 0;
    for(i = 1 ;i<=100;i++)
    {
        if((i%2) == 0)
        {
            k -=(1.0/i); //必须是1.0不然会当作整数做除法
        }
        else
        {
            k +=(1.0/i);
        }

    }
    printf("%f\n",k);
    return 0;
}
