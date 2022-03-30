//有5个学生，每个学生有3门课程的成绩,从键盘输人学生数据(包括学号,姓名,3门课程成绩)
//计算出平均成绩,将原有数据和计算出的平均分数存放在磁盘文件stud中
//将第5题stud文件中的学生数据，按平均分进行排序处理,将已排序的学生数据存
//入一个新文件stu_ sort 中。

//7.将第6题已排序的学生成绩文件进行插人处理。插人一个学生的3门课程成绩,程
//序先计算新插人学生的平均成绩,然后将它按成绩高低顺序插人,插人后建立一个新文件。



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 5
typedef struct stu
{
    int num;
    char name[10];
    double score[3];
    double ave;
}stu;

int main()
{
    FILE *f1;
    f1 = fopen("stud_sort.txt","r");
    if(f1==NULL)
    {
        printf("cannot open stud_sort");
        return 0;
    }
    stu old_stu[n+1];
    stu old[n];
    int i;
    fread(&old_stu,sizeof(old),1,f1);
    for(i=0;i<n;i++)
    {
        printf("%d %s %.2lf %.2lf %.2lf %.2lf\n",old_stu[i].num,old_stu[i].name,old_stu[i].score[0],old_stu[i].score[1],old_stu[i].score[2]
               ,old_stu[i].ave);
    }
    printf("\n");
    rewind(f1);
    stu new_stu;
    new_stu.num=106;
    strcpy(new_stu.name,"uhj");
    new_stu.score[0]=78;
    new_stu.score[1]=75;
    new_stu.score[2]=73;
    new_stu.ave = (new_stu.score[0]+new_stu.score[1]+new_stu.score[2])/3.0;

    for(i=0;i<n;i++)
    {
        if(new_stu.ave <old_stu[i].ave)
        {
            break;
        }
    }

    //移动数据
    int k=i;
    for(i=n;i>k;i--)
    {
        memcpy(&old_stu[i],&old_stu[i-1],sizeof(stu));
    }

    memcpy(&old_stu[k],&new_stu,sizeof(stu));

    FILE* f2;
    f2 = fopen("new_sort.txt","w+");
    if(f2==NULL)
    {
        printf("cannot open new_sort");
        return 0;
    }
    fwrite(&old_stu,sizeof(old_stu),1,f2);
    rewind(f2);
    stu p[n+1];
    fread(&p,sizeof(p),1,f2);

    for(i=0;i<=n;i++)
    {
        printf("%d %s %.2lf %.2lf %.2lf %.2lf\n",p[i].num,p[i].name,p[i].score[0],p[i].score[1],p[i].score[2]
               ,p[i].ave);
    }

    fclose(f1);
    fclose(f2);
    return 0;
}
