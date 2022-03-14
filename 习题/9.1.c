//定义一个结构体变量(包括年、月、日)。计算该日在本年中是第几天,注意闰年问题。


#include <stdio.h>

struct date
{
    int year;
    int month;
    int day;
};

int main()
{
    int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int i;
    int time=0;

    struct date b1={2100,3,1};
//    struct date *p=&b1;

    for(i=0;i<b1.month-1;i++)
    {
        time+=days[i];
    }
    time += b1.day;
    if((b1.year%4==0&&b1.year%100!=0)||b1.year%400==0)
    {
        if(b1.month>2)
        {
            time++;
        }
    }
    printf("第%d天",time);

    return 0;
}
