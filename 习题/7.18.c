//给出年,月,日,计算改日是该年的第几天

#include <stdio.h>

void compute_day(int year,int month,int day)
{
    int i,count=0,n;

    for(i=month-1;i>0;i--)
    {
        if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
        {
            count++;
        }
        if(i==2)
        {
            count--;
            count--;
        }
    }
    if(year%4==0 &&month>2)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                count++;
                goto Goto_A;
            }
            goto Goto_A;
        }
        count++;
    }
Goto_A:
    printf("该日是该年的第 %d 天\n",n=(month-1)*30+count+day);

}

int main()
{
    int year,month,day;
    printf("几年几月几日\n");
    scanf("%d%d%d",&year,&month,&day);
    compute_day(year,month,day);

    return 0;
}
