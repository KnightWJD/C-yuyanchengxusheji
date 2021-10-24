//求1!+2!3!+....+20!
//n! == 1*2*3*...n

#include <stdio.h>


int main()
{
    int i,p;
    long long sum=0;
    for(i=1;i<=20;i++)
    {
        long long k =1;
        for(p=i;p>0;p--)
        {
            k *= p;
        }
        sum+=k;
    }
    printf("%lld\n",sum);
    return 0;


}
