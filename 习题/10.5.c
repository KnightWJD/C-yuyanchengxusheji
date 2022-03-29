//有5个学生，每个学生有3门课程的成绩,从键盘输人学生数据(包括学号,姓名,3门课程成绩)
//计算出平均成绩,将原有数据和计算出的平均分数存放在磁盘文件stud中。

#include <stdio.h>
#include <stdlib.h>
#define n 2
typedef struct stu
{
    int num;
    char name[10];
    double score[3];
    double ave;
}stu;

int main()
{
    stu student[n];
    int i;
    double average =0;
    stu sb[n];
    for(i=0;i<n;i++)
    {
        average = 0;
        printf("请输入第%d个学生的学号,姓名,成绩一,成绩二.成绩三:",i+1);
        scanf("%d %s %lf %lf %lf",
              &student[i].num,&student[i].name,&student[i].score[0],&student[i].score[1],&student[i].score[2]);
        average +=student[i].score[0]+student[i].score[1]+student[i].score[2];
        average = average/3;
        student[i].ave =average;
    }
    FILE* f1;
    f1 =fopen("stud.txt","w+");
    if(f1==NULL)
    {
        printf("cannnot open stud.txt");
        return 0;
    }
    fwrite(&student,sizeof(student),1,f1);
    rewind(f1);
    fread(&sb,sizeof(sb),1,f1);
    for(i=0;i<n;i++)
    {
        printf("%d %s %.2lf %.2lf %.2lf %.2lf\n",
              sb[i].num,sb[i].name,sb[i].score[0],sb[i].score[1],sb[i].score[2],sb[i].ave);
    }

    fclose(f1);
    return 0;
}
