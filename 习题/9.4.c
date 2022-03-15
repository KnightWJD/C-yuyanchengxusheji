//编写一个函数print,打印-一个学生的成绩数组，该数组中有5个学生的数据记录，
//每个记录包括num, name,score[3],用主函数输人这些记录,用print函数输出这些记录。
//在第3题的基础上,编写-一个函数input,用来输人5个学生的数据记录。



#include <stdio.h>
#define n 5
#define s 3

struct data
{
    int num;
    char name[n];
    int score[s];
};


void print(struct data* b2)
{

    int i,j;
    for(i =0;i<n;i++)
    {
        printf("学号: %d |姓名: %s |1: %d |成绩2: %d |成绩3: %d\n",b2[i].num,b2[i].name,b2[i].score[0],b2[i].score[1],b2[i].score[2]);
    }
}

void input(struct data* b3)
{
    printf("请输入五个学生的数据:学号 姓名 成绩1 成绩2 成绩3:\n");
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d %s %d %d %d",&b3[i].num,&b3[i].name,&b3[i].score[0],&b3[i].score[1],&b3[i].score[2]);
    }
}



int main()
{
    struct data b1[5];
    input(b1);

    print(b1);
    return 0;
}
