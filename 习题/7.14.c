//输入10个学生5门课的成绩 , 分别用函数实现一下功能:
//1. 计算每个学生的平均分
//2.计算每门课的平均分
//3.找出所有50个分数中最高的分数所对应的学生和课程
//4.计算平均分方差

#include <stdio.h>
void average(double grade[10][5])
{
    double average_grade[10]={0};
    int i=0,j=0,k;
    for(i=0;i<10;i++)
    {
        k=0;
        for(j=0;j<5;j++)
        {
            k += grade[i][j];
        }
        average_grade[i]=k/5;
    }
    printf("\n");
    for(i=0;i<10;i++)
    {
        printf("第%d位学生的平局分为:\n%.2lf\n",i+1,average_grade[i]);
    }
}

void average_course(double grade[10][5])
{
    double average_grade[5]={0};
    int i=0,j=0,k;
    for(i=0;i<5;i++)
    {
        k=0;
        for(j=0;j<10;j++)
        {
            k += grade[j][i];
        }
        average_grade[i]=k/10;
    }
    printf("\n");
    for(i=0;i<10;i++)
    {
        printf("第%d门课的平局分为:\n%.2lf\n",i+1,average_grade[i]);
    }
}

void best(double grade[10][5])
{
    int i=0,j=0;
    double k=grade[0][0];
    for(i=0;i<10;i++)
    {
        for(j=0;j<5;j++)
        {
           if(grade[i][j]>k)
           {
               k = grade[i][j];
           }
        }
    }
    printf("\n");
    for(i=0;i<10;i++)
    {
        for(j=0;j<5;j++)
        {
           if(grade[i][j]==k)
           {
               printf("这50个分数中最高的分数所对应的学生和课程分别为:\n第%d位学生 第%d课程",i+1,j+1);
               return 0;
           }
        }
    }
}

void variance(double grade[10][5])
{
    printf("\n");
    int i=0,j=0;
    double k =0;
    for(i=0;i<5;i++)
    {
        k += grade[0][i];
    }
    k = k/5;
    double variance_average = ((grade[0][0]-k)*(grade[0][0]-k)+(grade[0][1]-k)*(grade[0][1]-k)+(grade[0][2]-k)*(grade[0][2]-k)+(grade[0][3]-k)*(grade[0][3]-k)+(grade[0][4]-k)*(grade[0][4]-k))/5;
    printf("第一个学生的平均成绩的方差为:\n%.2lf",variance_average);
}

int main()
{
    double grade[10][5]={0};
    int i =0;
    for(i=0;i<10;i++)
    {
        printf("请输入%d个学生的5个成绩:\n",i+1);
            scanf("%lf %lf %lf %lf %lf",&grade[i][0],&grade[i][1],&grade[i][2],&grade[i][3],&grade[i][4]);
    }
    average(grade);
    average_course(grade);
    best(grade);
    variance(grade);
    return 0;
}


