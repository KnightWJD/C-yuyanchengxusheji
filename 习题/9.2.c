//定义一个结构体变量(包括年、月、日)。计算该日在本年中是第几天,注意闰年问题。
//写一个函数days,实现第1题的计算。由主函数将年、月、日传递给days函数,计算后将日子数传回主函数输出。



#include <stdio.h>

struct date
{
    int year;
    int month;
    int day;
};

int days(struct date p)
{
    int time=0;
    int dayss[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int i;
    for(i=0;i<p.month-1;i++)
    {
        time+=dayss[i];
    }
    time += p.day;
    if((p.year%4==0&&p.year%100!=0)||p.year%400==0)
    {
        if(p.month>2)
        {
            time++;
        }
    }
    return time;

}

int main()
{

    int i;
    int time=0;

    struct date b1={2100,3,1};
//    struct date *p=&b1;
    time = days(b1);
    printf("第%d天",time);

    return 0;
}
