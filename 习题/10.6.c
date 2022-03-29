//有5个学生，每个学生有3门课程的成绩,从键盘输人学生数据(包括学号,姓名,3门课程成绩)
//计算出平均成绩,将原有数据和计算出的平均分数存放在磁盘文件stud中
//将第5题stud文件中的学生数据，按平均分进行排序处理,将已排序的学生数据存
//入一个新文件stu_ sort 中。


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 3
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
    int i,j;
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
    int num;
    char name[10];
    double score[3];
    double ave;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(sb[j].ave>sb[j+1].ave)
            {
                num = sb[j].num;
                strcpy(name,sb[j].name);
                score[0]=sb[j].score[0]; score[1]=sb[j].score[1]; score[2]=sb[j].score[2];
                ave =sb[j].ave;

                sb[j].num=sb[j+1].num;
                strcpy(sb[j].name,sb[j+1].name);
                sb[j].score[0]=sb[j+1].score[0]; sb[j].score[1]=sb[j+1].score[1]; sb[j].score[2]=sb[j+1].score[2];
                sb[j].ave = sb[j+1].ave;

                sb[j+1].num =num;
                strcpy(sb[j+1].name,name);
                sb[j+1].score[0]=score[0]; sb[j+1].score[1]=score[1]; sb[j+1].score[2]=score[2];
                sb[j+1].ave = ave;
            }
        }

    }
    FILE* f2;
    f2 = fopen("stud_sort.txt","w+");
    if(f2==NULL)
    {
        printf("cannot open stud_sort.txt");
        return 0;
    }
    fwrite(&sb,sizeof(sb),1,f2);
    rewind(f2);
    stu sc[n];
    fread(&sc,sizeof(sc),1,f2);
    for(i=0;i<n;i++)
    {
        printf("%d %s %.2lf %.2lf %.2lf %.2lf\n",sc[i].num,sc[i].name,sc[i].score[0],sc[i].score[1],sc[i].score[2]);
    }


    fclose(f2);
    fclose(f1);
    return 0;
}
