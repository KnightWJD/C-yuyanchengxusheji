//有10个学生,每个学生的数据包括学号、姓名、3门课程的成绩,从键盘输入10个学
//生数据,要求输出3门课程总平均成绩,以及最高分的学生的数据(包括学号、姓名、3门课
//程成绩、平均分数)。

#include <stdio.h>
#include <string.h>
#define s 3
#define n 10
struct data
{
    int num;
    char name[10];
    int score[s];
};

int main()
{
    struct data b1[n];

    printf("请输入%d个学生的学号 姓名 三门课的成绩\n",n);
    int i,sum=0,max=0,xh,cj[3];
    char xm[10];
    for(i=0;i<n;i++)
    {
        scanf("%d %s %d %d %d",&b1[i].num,&b1[i].name,&b1[i].score[0],&b1[i].score[1],&b1[i].score[2]);
        sum += b1[i].score[0]+b1[i].score[1]+b1[i].score[2];
        if(max < b1[i].score[0])
        {
            max = b1[i].score[0];
            xh = b1[i].num;
            strcpy(xm,b1[i].name);
            cj[0]=b1[i].score[0];
            cj[1]=b1[i].score[1];
            cj[2]=b1[i].score[2];
        }
        if(max < b1[i].score[1])
        {
            max = b1[i].score[1];
            xh = b1[i].num;
            strcpy(xm,b1[i].name);
            cj[0]=b1[i].score[0];
            cj[1]=b1[i].score[1];
            cj[2]=b1[i].score[2];
        }
        if(max < b1[i].score[2])
        {
            max = b1[i].score[2];
            xh = b1[i].num;
            strcpy(xm,b1[i].name);
            cj[0]=b1[i].score[0];
            cj[1]=b1[i].score[1];
            cj[2]=b1[i].score[2];
        }


    }
    printf("总平均成绩为: %.2lf \n",((double)sum)/(n*3.0));
    double average = ((double)(cj[0]+cj[1]+cj[2]))/3.0;
    printf("最高分同学的数据:\n学号: %d |姓名: %s |成绩1: %d |成绩2: %d |成绩3: %d |平均成绩: %.2lf",xh,xm,cj[0],cj[1],cj[2],
            average);
    return 0;
}
